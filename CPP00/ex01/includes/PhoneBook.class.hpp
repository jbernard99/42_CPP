/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 22:32:42 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/20 13:38:08 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook{

	unsigned int	nb_contact;
	Contact			*contacts[8];

public:

	void 		addContact(std::string info[5]);
	Contact		searchByIndex(int i);
	int			getNbContact(void);

	PhoneBook(void);
	~PhoneBook(void);
};

#endif