# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 15:48:48 by manujime          #+#    #+#              #
#    Updated: 2023/08/21 13:32:40 by manujime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98

GREEN		=		\033[0;32m
RED			=		\033[0;31m
END			=		\033[0m

SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBJ = $(SRC:.cpp=.o)

NAME = Animals

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
