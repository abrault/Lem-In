# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/03 17:17:13 by abrault           #+#    #+#              #
#    Updated: 2014/03/10 13:55:35 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_new_str.c \
	  src/ft_putchar.c \
	  src/ft_putstr.c \
	  src/ft_putendl.c \
	  src/ft_strlen.c \
	  src/ft_strchr.c \
	  src/ft_strstr.c \
	  src/ft_strstr.c \
	  src/ft_strcat.c \
	  src/ft_strcpy.c \
	  src/ft_fustr.c \
	  src/ft_strcmp.c \
	  src/ft_strncmp.c \
	  src/ft_atoi.c \
	  src/get_next_line.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -c $(CFLAGS) -I./includes/ $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
