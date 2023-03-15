# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 02:08:52 by jbernard          #+#    #+#              #
#    Updated: 2023/03/15 00:22:43 by jbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

#_____________________________#
#|________Compilation________|#

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

#_____________________________#
#|_______Directories_________|#

INC_DIR = includes/

SRC_DIR = srcs/

CLASS_DIR = $(SRC_DIR)class

MAIN_DIR = $(SRC_DIR)main

#_____________________________#
#|__________Files____________|#

MAIN_FILES = main.cpp

CLASS_FILES = PhoneBook.class.cpp

#_____________________________#
#|___________________________|#

all : NAME

NAME :
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	@echo Nothing to be done
	
fclean :
	rm $(NAME)