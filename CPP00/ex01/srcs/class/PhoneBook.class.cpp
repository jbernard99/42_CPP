/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:39:03 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/20 13:38:50 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/PhoneBook.class.hpp"
#include "../../includes/Contact.class.hpp"
#include "PhoneBook.class.hpp"

void PhoneBook::addContact(std::string info[5])
{
	nb_contact++;
	if (nb_contact < 8)
		contacts[nb_contact - 1] = new Contact(info);
	else{
		contacts[(nb_contact % 8) - 1] = new Contact(info);
	}
}

Contact PhoneBook::searchByIndex(int i)
{
	return *contacts[i];
}

int PhoneBook::getNbContact(void)
{
	return (nb_contact);	
}

PhoneBook::PhoneBook(void)
{
	this->nb_contact = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

