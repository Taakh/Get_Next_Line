# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 13:23:40 by rmangili          #+#    #+#              #
#    Updated: 2015/01/04 00:12:29 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strcat.c \
ft_strcpy.c \
ft_strlen.c \
ft_strjoin.c

OBJ = ft_strcat.o \
ft_strcpy.o \
ft_strlen.o \
ft_strjoin.o 

FLAGS = -Wall -Werror -Wextra

.PHONY: all relib clean fclean re

all: $(NAME)

$(NAME):
	@gcc -c -I. $(FLAGS) $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Make [OK]!"

relib:
	@make -C ./libft re
	@echo "Make lib done!"

clean:
	@rm -rf	$(OBJ)
	@echo "Make clean [OK]!"

fclean: clean
	@rm -rf libft.a
	@echo "Make fclean [OK]!"

re: fclean all
	@echo "Make re [OK]!"
