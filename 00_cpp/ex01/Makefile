# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 22:40:46 by manujime          #+#    #+#              #
#    Updated: 2023/06/20 11:19:21 by manujime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror

GREEN		=		\033[0;32m
RED			=		\033[0;31m
END			=		\033[0m

SRC =   phonebook.cpp \
		contact.cpp	\
		main.cpp \

OBJ = $(SRC:.cpp=.o)

NAME = phonebook

all: $(NAME)
	
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled$(END)"


%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted$(END)"

re: fclean all

.PHONY: all clean fclean re

