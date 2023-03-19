/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:48:42 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/18 04:09:29 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../../includes/Contact.class.hpp"

Contact::Contact( void ) {
	std::cout << "Constructor Contact Called!" << std::endl;
	return;
}

Contact::~Contact( void ) {
	std::cout << "Destructor Contact Called!" << std::endl;
	return;
}