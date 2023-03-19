/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 23:39:03 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/18 04:09:37 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "Constructor PhoneBook Called!" << std::endl;
	return;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destructor PhoneBook Called!" << std::endl;
	return;
}

