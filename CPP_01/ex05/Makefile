# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 19:05:17 by abenlahb          #+#    #+#              #
#    Updated: 2023/09/12 08:59:12 by abenlahb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Harl

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