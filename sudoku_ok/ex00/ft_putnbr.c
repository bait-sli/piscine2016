/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 14:05:15 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 20:38:08 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr(int nb)
{
	int neg;

	neg = 0;
	if (nb)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			if (nb / 10)
				ft_putnbr(nb / -10);
			ft_putchar((-(nb + 1) % 10) + 49);
		}
		else
		{
			if (nb / 10)
				ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
		return ;
	}
	ft_putchar('0');
}
