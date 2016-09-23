# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 21:24:04 by bait-sli          #+#    #+#              #
#    Updated: 2016/09/15 23:41:22 by bait-sli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_display_file.o

clean:
		/bin/rm -f ft_display_file.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
