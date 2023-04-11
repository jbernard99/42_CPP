# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 13:54:13 by jbernard          #+#    #+#              #
#    Updated: 2023/04/11 15:31:07 by jbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BankAccount

#_____________________________#
#|________Compilation________|#

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

#_____________________________#
#|_______Directories_________|#

INC_DIR = includes

SRC_DIR = srcs/

CLASS_DIR = $(SRC_DIR)class

MAIN_DIR = $(SRC_DIR)main

OBJ_DIR = obj/

#_____________________________#
#|__________Files____________|#

MAIN_FILES = tests.cpp

CLASS_FILES = Account.cpp

OBJ_FILES = $(MAIN_FILES:%.cpp=$(OBJ_DIR)%.o) \
			$(CLASS_FILES:%.cpp=$(OBJ_DIR)%.o)

VPATH = $(SRC_DIR) $(CLASS_DIR) $(MAIN_DIR)
 
#_____________________________#
#|__________Targets__________|#


all : $(OBJ_DIR) $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CC) $(FLAGS) -I$(INC_DIR) $^ -o $@

$(OBJ_DIR)%.o : %.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)

clean :
	rm -rf $(OBJ_DIR)
	
fclean : clean
	rm -f $(NAME)

re : fclean all