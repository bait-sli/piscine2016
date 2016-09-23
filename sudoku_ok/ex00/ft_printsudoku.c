/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:15:58 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 22:31:28 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printsudoku(int **tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(tab[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
