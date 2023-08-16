# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/16 19:18:44 by abenlahb         ###   ########.fr        #
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
%.o:%.cpp
	$(CC)  $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
