/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viforget <viforget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 08:21:11 by viforget          #+#    #+#             */
/*   Updated: 2021/10/19 11:11:47 by viforget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {

	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_d_secret = "";
	this->_is_set = 0;
	return;
}

Contact::~Contact( void ) {
	
	return;
}

std::string	Contact::get_first_name( void ) {
	
	return (this->_first_name);
}

std::string	Contact::get_last_name( void ) {
	
	return(this->_last_name);
}

std::string	Contact::get_nickname( void ) {
	
	return(this->_nickname);
}

std::string	Contact::get_phone_number( void ) {
	
	return(this->_phone_number);
}

std::string	Contact::get_d_secret( void ) {
	
	return(this->_d_secret);
}

int	Contact::is_set( void ) {
	
	return(this->_is_set);
}

void		Contact::set_first_name( std::string s) {

	this->_first_name = s;
	return;
}

void		Contact::set_last_name( std::string s) {

	this->_last_name = s;
	return;
}
void		Contact::set_nickname( std::string s) {

	this->_nickname = s;
	return;
}

void		Contact::set_phone_number( std::string s) {

	this->_phone_number = s;
	return;
}

void		Contact::set_d_secret( std::string s) {

	this->_d_secret = s;
	return;
}

void		Contact::set_is_set( void ) {

	this->_is_set = 1;
	return;
}