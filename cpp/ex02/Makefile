# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 11:45:05 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/18 12:17:35 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CPP = g++-11
NAME = executableaFile
CFLAGS = -Wall -Werror -Werror -std=c++98

all:$(NAME)
	
$(NAME):$(OBJ)
	$(CPP) $(CFLAGS) $^ -o $(NAME)
.cpp.o:
	$(CPP) $(CFLAGS) -c $< 
clean:
	rm -rf $(OBJ)
fclean:clean
	rm -rf $(NAME)
re:fclean all

.PHONY: re fclean all