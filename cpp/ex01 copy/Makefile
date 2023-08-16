# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/16 10:35:09 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp mainprj.cpp PhoneBook.cpp
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phoneook
CC = g++-11

all:$(NAME)

$(NAME):$(OBJ)
	$(CC)  $(OBJ) -o $(NAME)
%.o:%.c
	$(CC)  -c $<
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all
