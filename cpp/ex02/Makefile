# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/18 11:45:05 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/21 11:34:11 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CPP = c++
NAME = executableaFile
CFLAGS = -Wall -Werror -Werror -std=c++98

#Colors
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
RED 		= 	\e[0;31m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:$(NAME)
	
$(NAME):$(OBJ)
	@$(CPP) $(CFLAGS) $^ -o $(NAME)
	@printf "$(_SUCCESS) $(YELLOW)- Executable ready.\n$(RESET)"
	
.cpp.o:
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CPP) $(CFLAGS) -c $< 
	@printf "$(GREEN)    - Object file ready.\n$(RESET)"
	
clean:
	@rm -rf $(OBJ)
	@printf "$(RED)- RM *.o .\n$(RESET)"
fclean:clean
	@rm -rf $(NAME)
	@printf "$(RED)- RM $(NAME) .\n$(RESET)"
re:fclean all

.PHONY: re fclean all