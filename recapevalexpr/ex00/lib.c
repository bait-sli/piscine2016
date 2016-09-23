/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 12:52:16 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/17 14:36:00 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	my_put_nbr(int nbr)
{
	if (nbr < 0)
	{
		my_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		my_put_nbr(nbr / 10);
		my_put_nbr(nbr % 10);
	}
	else
		my_putchar(nbr + 48);
}
