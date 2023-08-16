# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb < abenlahb@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/16 17:07:16 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp mainprj.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook
CC = c++

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
