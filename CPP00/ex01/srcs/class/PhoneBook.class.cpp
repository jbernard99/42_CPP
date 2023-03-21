/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:39:03 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/21 15:44:21 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/PhoneBook.class.hpp"
#include "../../includes/Contact.class.hpp"
#include "PhoneBook.class.hpp"

void PhoneBook::addContact(std::string info[5])
{
	nb_contact++;
	if (nb_contact <= 8)
		contacts[nb_contact - 1] = new Contact(info);
	else{
		int i = (nb_contact % 8) - 1;
		delete contacts[i];
		contacts[i] = new Contact(info);
	}
	std::cout << "Succesfully added contact." << std::endl;
}

void PhoneBook::print_contacts(void)
{
	unsigned int i = 0;
	std::cout << "___________________________________" << std::endl;
	while (i <= 7){
		if (i < nb_contact){
			contacts[i]->showBaseInfos(i);
		}
		i++;
	}
	std::cout << "___________________________________" << std::endl;
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
	nb_contact = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	unsigned int i = 0;
	if (nb_contact > 8){
		while (i <= 7){
			std::cout << "Deleted contact # " << i << std::endl;
			delete contacts[i];
			i++;
		}
	}
	else{
		while (i < nb_contact){
			std::cout << "Deleted contact # " << i << std::endl;
			delete contacts[i];
			i++;
		}
	}
	return;
}

