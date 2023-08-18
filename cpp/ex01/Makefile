# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/18 12:05:14 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp mainprj.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
CC = g++-11

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