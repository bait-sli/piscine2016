# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/13 06:42:27 by bait-sli          #+#    #+#              #
#    Updated: 2016/09/14 15:57:37 by bait-sli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c   \
	  srcs/ft_strcmp.c    \
	  srcs/ft_strlen.c     \
	  srcs/ft_swap.c

HEADER_DIR = includes/header1.h includes/header2.h

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I $(HEADER_DIR)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
