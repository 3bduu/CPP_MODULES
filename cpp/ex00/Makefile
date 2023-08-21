# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:38:02 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/21 10:56:03 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
C++ = c++
CFLAGS = -Wall -Wextra -Werror 
NAME = megaphone

all:$(NAME)

$(NAME):$(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)
.cpp.o:
	$(C++) $(CFLAGS) -c $<
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re: fclean all

.PHONY: re fclean all
