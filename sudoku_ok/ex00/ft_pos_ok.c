/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_ok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 21:27:35 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 21:59:26 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		xy_ok(int k, int **tab, int x, int y)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if ((k == tab[x][i] && i != y) || (k == tab[i][y] && i != x))
			return (0);
		i++;
	}
	return (1);
}

int		grille_ok(int k, int **tab, int x, int y)
{
	int i;
	int j;
	int x2;
	int y2;

	x2 = x - (x % 3);
	y2 = y - (y % 3);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (k == tab[x2 + i][y2 + j] && (!(x == x2 + i && y == y2 + j)))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_pos_ok(int k, int **tab, int x, int y)
{
	return (xy_ok(k, tab, x, y) && grille_ok(k, tab, x, y));
}
