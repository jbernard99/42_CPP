/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:39:03 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/19 22:36:12 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/PhoneBook.class.hpp"
#include "../../includes/Contact.class.hpp"
#include "PhoneBook.class.hpp"

void PhoneBook::addContact(Contact newContact)
{
	nb_contact++;
	if (nb_contact < 8)
		*contacts[nb_contact - 1] = newContact;
	else{
		*contacts[(nb_contact % 8) - 1] = newContact;
	}
}

PhoneBook::PhoneBook(void)
{
	this->nb_contact = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

