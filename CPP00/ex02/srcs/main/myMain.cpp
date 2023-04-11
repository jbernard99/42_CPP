/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myMain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:07:31 by jbernard          #+#    #+#             */
/*   Updated: 2023/04/11 14:29:47 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	time_t	t = time(NULL);
	tm		*lt = std::localtime(&t);
	std::cout << "[" << lt->tm_year + 1900 << lt->tm_mon
			<< lt->tm_mday << "_" << lt->tm_hour << lt->tm_min
			<< lt->tm_sec << "] ";
	return (0);
}