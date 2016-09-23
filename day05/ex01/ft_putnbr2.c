/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 09:01:01 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/06 10:35:59 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1 ,&c, 1);
}

void	ft_putnbr2(int nb2)
{
	char strg[] = (char)nb2;
	int i;
	i = 0;

	while(strg[i] != '\0')
	{
		ft_putchar(strg[i]);
		i++;
	}
}

int main (void)
{
	ft_putnbr2(5258);
	ft_putchar('\n');
}
