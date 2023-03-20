/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 21:39:40 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/20 16:09:46 by jbernard         ###   ########.fr       */
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

void show_contacts(PhoneBook pb){
	for (int i = 0; i <= 7; i++){
		if (i < pb.getNbContact())
			pb.searchByIndex(i).showInfos(i);
	}
}

int	validate_s_index(std::string s_index){
	int i;
	if (s_index.length() == 1){
		i = s_index[0] - 48;
		if (i >= 0 && i <= 7)
			return (i);
		else {
			std::cout << "Oops! The digit must be between 0 and 7.. Try again ^_^" << std::endl;
			return (-1);
		}
	} 
	else {
		std::cout << "Sowwwy your input must be 1 char long ONLY. NO MORE, NO LESS >:(" << std::endl;
		return (-1);
	}
}

int main(void){
	PhoneBook	myPhoneBook;
	std::string command;

	while (1){
		std::cin >> command;
		if (command == "ADD"){
			std::string* info = gatherContactInfo();
			myPhoneBook.addContact(info);
			delete[] info;
		}
		else if (command == "SEARCH"){
			show_contacts(myPhoneBook);
			std::string	s_index;
			std::cout << "What is the index of the contact you are searching for??" << std::endl;
			std::cin >> s_index;
			int	i = validate_s_index(s_index);
			(void)i;
		}
		else if (command == "EXIT") {
			exit(0);
		}
	}
	
	return (0);
}