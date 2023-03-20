/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:48:42 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/19 22:36:14 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/Contact.class.hpp"

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