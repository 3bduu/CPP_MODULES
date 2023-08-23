# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:36:53 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/21 11:31:52 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror 
NAME = phonebook
CC = c++

#Colors
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RED 		= 	\e[0;31m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:$(NAME)

$(NAME):$(OBJ)
	@$(CC)  $(CFLAGS) $^ -o $(NAME)
	@printf "$(_SUCCESS) $(YELLOW)- Executable ready.\n$(RESET)"
.cpp.o:
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC)  $(CFLAGS) -c $<
	@printf "$(GREEN)    - Object file ready.\n$(RESET)"
clean:
	@rm -rf $(OBJ)
	@printf "$(RED)- RM *.o .\n$(RESET)"
fclean:clean
	@rm -rf $(NAME)
	@printf "$(RED)- RM $(NAME) .\n$(RESET)"
re:fclean all

.PHONY: re fclean all