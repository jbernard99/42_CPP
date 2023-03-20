/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:39:40 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/19 22:36:13 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/PhoneBook.class.hpp"
#include "../../includes/Contact.class.hpp"

std::string* gatherContactInfo(void){
	std::string* info = new std::string[5];
	std::cout << "What's the first name of the contact?" << std::endl;
	std::cin >> info[0];
	std::cout << "What's the last name of " << info[0] << "?" << std::endl;
	std::cin >> info[1];
	std::cout << "What's the nickname of " << info[0] << " " << info[1] << "?" << std::endl;
	std::cin >> info[2];
	std::cout << "What's the phone number of " << info[2] << "?" << std::endl;
	std::cin >> info[3];
	std::cout << "What's the darkest secret of " << info[2] << "?" << std::endl;
	std::cin >> info[4];
	return ((std::string*)info);
}

Contact getNewContact(void){
	std::string* info = gatherContactInfo();
	Contact newContact(info);
	delete[] info;
	return (newContact);
}

int main(void){
	PhoneBook	myPhoneBook;
	std::string command;

	while (1){
		std::cin >> command;
		if (command == "ADD"){
			myPhoneBook.addContact(getNewContact());
		}
		else if (command == "SEARCH"){
			std::cout << "Search command triggered!" << std::endl;
		}
		else if (command == "EXIT") {
			exit(0);
		}
	}
	
	return (0);
}