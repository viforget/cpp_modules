/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 08:03:30 by viforget          #+#    #+#             */
/*   Updated: 2021/10/20 08:56:35 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"
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

void	select_index(int index, Phonebook phonebook)
{
	if (index <= 0 || index > NB_CONTACT || phonebook.get_contact(index - 1).is_set() == 0)
		std::cout << "ERROR" << std::endl;
	else
	{
		index--;
		std::cout << "FIRST NAME    : " << phonebook.get_contact(index).get_first_name() << std::endl;
		std::cout << "LAST NAME     : " << phonebook.get_contact(index).get_last_name() << std::endl;
		std::cout << "NICKNAME      : " << phonebook.get_contact(index).get_nickname() << std::endl;
		std::cout << "PHONE NUMBER  : " << phonebook.get_contact(index).get_phone_number() << std::endl;
		std::cout << "DARKEST SECRET: " << phonebook.get_contact(index).get_d_secret() << std::endl;
	}
}

void	search_contact( Phonebook phonebook )
{
	int i = 0;
	std::string buf;

	std::cout << std::setw(12) << std::left << "  FIRST NAME|" << std::setw(10) << std::left << " LAST NAME|" << std::setw(10) << std::left << " USERNAME" << std::endl;
	while(i < NB_CONTACT && phonebook.get_contact(i).is_set())
	{
		aff_contact(phonebook.get_contact(i), i);
		i++;
	}
	std::getline(std::cin, buf);
	select_index(atoi(buf.c_str()), phonebook);
}

void	aff_menu(void)
{
	std::cout << "MENU :" << std::endl << "-ADD" << std::endl
		<< "-SEARCH" << std::endl << "-EXIT" << std::endl;
}

int		add_contact(Phonebook *phonebook, int index)
{
	std::string buf;

	std::cout << "FIRST NAME: ";
	std::getline(std::cin, buf);
	phonebook->set_contact_first_name(index, buf);
	std::cout << "LAST NAME: ";
	std::getline(std::cin, buf);
	phonebook->set_contact_last_name(index, buf);
	std::cout << "NICKNAME: ";
	std::getline(std::cin, buf);
	phonebook->set_contact_nickname(index, buf);
	std::cout << "PHONE NUMBER: ";
	std::getline(std::cin, buf);
	phonebook->set_contact_phone_number(index, buf);
	std::cout << "TELL ME THEM DARKEST SECRET 👿 : ";
	std::getline(std::cin, buf);
	phonebook->set_contact_d_secret(index, buf);
	phonebook->set_contact(index);
	return ((index + 1) % NB_CONTACT);
}

int 	main()
{
	Phonebook	phonebook;
	std::string	buf;
	int			index = 0;

	aff_menu();
	while (1)
	{
		std::cout << ">";
		std::getline(std::cin, buf);
		if (!buf.compare("EXIT"))
			return (0);
		else if (!buf.compare("ADD"))
			index = add_contact(&phonebook, index);
		else if (!buf.compare("SEARCH"))
			search_contact(phonebook);
	}
}