# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manujime <manujime@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 22:40:46 by manujime          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2023/08/07 13:37:54 by manujime         ###   ########.fr        #
=======
#    Updated: 2023/08/06 20:45:14 by manujime         ###   ########.fr        #
>>>>>>> 1cacdcd046ead6a573b9f0707890a21434aec972
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98 

GREEN		=		\033[0;32m
RED			=		\033[0;31m
END			=		\033[0m

SRC =	main.cpp \
		Harl.cpp \

OBJ = $(SRC:.cpp=.o)

NAME = harlFilter

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

