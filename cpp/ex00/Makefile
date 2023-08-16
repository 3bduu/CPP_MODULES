# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb < abenlahb@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:38:02 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/16 16:54:33 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)
C++ = c++
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
