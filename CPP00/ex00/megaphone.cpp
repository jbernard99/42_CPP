/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 23:42:08 by jbernard          #+#    #+#             */
/*   Updated: 2023/03/14 02:05:46 by jbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]){
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else if (argc > 1){
		int i = 1;
		while(i < argc){
			int j = 0;
			while (argv[i][j]){
				if (std::islower(argv[i][j])){
					char c = std::toupper(argv[i][j]);
					std::cout << c;
				}
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
		}
	}
	return (0);
}