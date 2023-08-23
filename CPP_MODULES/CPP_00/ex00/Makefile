# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 13:38:02 by abenlahb          #+#    #+#              #
#    Updated: 2023/08/21 11:31:35 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
C++ = c++
CFLAGS = -Wall -Wextra -Werror 
NAME = megaphone

#Colors
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
RED 		= 	\e[0;31m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:$(NAME)

$(NAME):$(OBJ)
	@$(C++) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) $(YELLOW)- Executable ready.\n$(RESET)"
.cpp.o:
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(C++) $(CFLAGS) -c $<
	@printf "$(GREEN)    - Object file ready.\n$(RESET)"
clean:
	@rm -rf $(OBJ)
	@printf "$(RED)- RM *.o .\n$(RESET)"
fclean:clean
	@rm -rf $(NAME)
	@printf "$(RED)- RM $(NAME) .\n$(RESET)"
re: fclean all

.PHONY: re fclean all
