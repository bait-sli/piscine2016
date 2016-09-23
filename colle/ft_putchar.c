/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgareche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 17:22:43 by dgareche          #+#    #+#             */
/*   Updated: 2016/09/04 21:42:53 by dgareche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putline(char c1, char c2, char c3, int nb)
{
	int i;

	i = 0;
	ft_putchar(c1);
	if (nb > 2)
	{
		while (i < nb - 1)
		{
			ft_putchar(c2);
			i++;
		}
	}
	if (nb > 1)
	{
		ft_putchar(c3);
	}
	ft_putchar('\r');
	ft_putchar('\n');
	return (0);
}
