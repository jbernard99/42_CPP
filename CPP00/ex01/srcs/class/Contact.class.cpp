/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:48:42 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/21 12:35:40 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/Contact.class.hpp"
#include "Contact.class.hpp"

Contact::Contact(std::string info[5])
{
	for (int i = 0; i == 4; i++){
		if (info[i] == ""){
			std::cout << "Error: Empty contact field. Entry refused ;) :P xD";
			return;
		}
	}
	Contact::setFirstName(info[0]);
	Contact::setLastName(info[1]);
	Contact::setNickname(info[2]);
	Contact::setPhoneNumber(info[3]);
	Contact::setDarkestSecret(info[4]);
	return;
}

void Contact::showBaseInfos(int i)
{
	std::cout << "| " << i  << " | ";
	_formatColumn(this->first_name);
	_formatColumn(this->last_name);
	_formatColumn(this->nickname);
	std::cout << std::endl;
}

void Contact::showFullInfos(int i)
{
	std::cout << "_____________" << "Contact #" << i << "______________" << std::endl;
	std::cout << "| FIRST NAME:  " << first_name << std::endl;
	std::cout << "| LAST NAME:  " << last_name << std::endl;
	std::cout << "| NICKNAME:  " << nickname << std::endl;
	std::cout << "| PHONE #:  " << phone_number << std::endl;
	std::cout << "| DARKEST SECRET:  " << darkest_secret << std::endl;
	std::cout << "|____________________________________" << std::endl;
}

void Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName(void)
{
	return this->first_name;
}

std::string Contact::getLastName(void)
{
	return this->last_name;
}

std::string Contact::getnickame(void)
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}

Contact::~Contact( void )
{
	return;
}

void Contact::_formatColumn(std::string str)
{
	std::cout << str.substr(0, 6);
	if (str.size() >= 7)
		std::cout << ". | ";
	else{
		for (int i = str.size(); i <= 7; i++)
			std::cout << " ";
		std::cout << "| ";
	}
}