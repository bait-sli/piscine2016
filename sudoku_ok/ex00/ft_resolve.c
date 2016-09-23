/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 21:51:20 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 20:40:05 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_resolve(int **tab, int pos)
{
	int k;
	int x;
	int y;

	x = pos / 9;
	y = pos % 9;
	if (pos >= 81)
		return (1);
	if (tab[x][y])
		return (ft_resolve(tab, pos + 1));
	k = 1;
	while (k < 10)
	{
		if (ft_pos_ok(k, tab, x, y))
		{
			tab[x][y] = k;
			if (ft_resolve(tab, pos + 1))
				return (1);
		}
		k++;
	}
	tab[x][y] = 0;
	return (0);
}
