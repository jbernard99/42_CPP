/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:32:42 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/19 22:36:15 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook{

	Contact			*contacts[8];
	unsigned int	nb_contact;

public:

	void addContact(Contact newContact);

	PhoneBook(void);
	~PhoneBook(void);
};

#endif