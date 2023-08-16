# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:38:02 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/14 14:23:32 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)
C++ = g++-11 
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all:$(NAME)

$(NAME):$(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)
clean:

fclean:
	rm -rf $(NAME)
re: fclean all

.PHONY: re fclean all
