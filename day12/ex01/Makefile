# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 23:24:48 by bait-sli          #+#    #+#              #
#    Updated: 2016/09/15 23:39:57 by bait-sli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_cat.o

clean:
		/bin/rm -f ft_cat.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
