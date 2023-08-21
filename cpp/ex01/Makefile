# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/21 10:55:29 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror 
NAME = phonebook
CC = c++

all:$(NAME)

$(NAME):$(OBJ)
	$(CC)  $(CFLAGS) $^ -o $(NAME)
.cpp.o:
	$(CC)  $(CFLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all

.PHONY: re fclean all