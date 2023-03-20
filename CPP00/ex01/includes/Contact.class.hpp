/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 02:03:08 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/20 13:06:38 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact{

	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:

	void showInfos(int i);
	void setFirstName(std::string first_name);
	void setLastName(std::string last_name);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phone_number);
	void setDarkestSecret(std::string darkest_secret);
	std::string getFirstName( void );
	std::string getLastName( void );
	std::string getnickame( void );
	std::string getPhoneNumber( void );
	std::string getDarkestSecret( void );

	Contact(std::string info[5]);
	~Contact(void);

private:

	void _formatColumn(std::string str);

};

#endif