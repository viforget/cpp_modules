/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 08:03:30 by viforget          #+#    #+#             */
/*   Updated: 2021/10/19 18:24:39 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#define NB_CONTACT 8

void	aff_10( std::string str )
{
	if (str.length() > 10)
			std::cout << str.substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << std::left << str;
}

void	aff_contact( Contact	contact, int i)
{
	std::cout << i  + 1 << "|";
	aff_10(contact.get_first_name());
	std::cout << "|";
	aff_10(contact.get_last_name());
	std::cout << "|";
	aff_10(contact.get_nickname());
	std::cout << std::endl;
}

void	select_index(int index, Contact	list[NB_CONTACT])
{
	if (index <= 0 || index > NB_CONTACT || !list[index - 1].is_set())
		std::cout << "ERROR" << std::endl;
	else
	{
		index--;
		std::cout << list[index].get_first_name() << std::endl;
		std::cout << list[index].get_last_name() << std::endl;
		std::cout << list[index].get_nickname() << std::endl;
		std::cout << list[index].get_phone_number() << std::endl;
		std::cout << list[index].get_d_secret() << std::endl;
	}
}

void	search_contact( Contact	list[NB_CONTACT] )
{
	int i = 0;
	std::string buf;

	std::cout << std::setw(12) << std::left << "  FIRST NAME|" << std::setw(10) << std::left << " LAST NAME|" << std::setw(10) << std::left << " USERNAME" << std::endl;
	while(i < NB_CONTACT && list[i].is_set())
	{
		aff_contact(list[i], i);
		i++;
	}
	std::cin >> buf;
	select_index(atoi(buf.c_str()), list);
}

void	aff_menu(void)
{
	std::cout << "MENU :" << std::endl << "-ADD" << std::endl
		<< "-SEARCH" << std::endl << "-EXIT" << std::endl;
}

int		add_contact(Contact	list[NB_CONTACT], int index)
{
	std::string buf;

	std::cout << "FIRST NAME: ";
	std::cin >> buf;
	list[index].set_first_name(buf);
	std::cout << "LAST NAME: ";
	std::cin >> buf;
	list[index].set_last_name(buf);
	std::cout << "NICKNAME: ";
	std::cin >> buf;
	list[index].set_nickname(buf);
	std::cout << "PHONE NUMBER: ";
	std::cin >> buf;
	list[index].set_phone_number(buf);
	std::cout << "TELL ME THEM DARKEST SECRET 👿 : ";
	std::cin >> buf;
	list[index].set_d_secret(buf);
	list[index].set_is_set();
	return ((index + 1) % NB_CONTACT);
}

int 	main()
{
	Contact		list[NB_CONTACT];
	std::string	buf;
	int			index = 0;

	aff_menu();
	while (1)
	{
		std::cout << ">";
		std::cin >> buf;
		if (!buf.compare("EXIT"))
			return (0);
		else if (!buf.compare("ADD"))
			index = add_contact(list, index);
		else if (!buf.compare("SEARCH"))
			search_contact(list);
	}
}