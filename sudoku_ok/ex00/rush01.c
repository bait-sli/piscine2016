/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:28:26 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 22:04:29 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		arg_ok(int ac, char **av)
{
	if (ac != 10)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	while (--ac > 0)
	{
		if (ft_strlen(av[ac]) != 9)
		{
			ft_putstr("Erreur\n");
			return (0);
		}
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;
	int **tab;

	if (!arg_ok(ac, av))
		return (0);
	i = 0;
	tab = (int**)malloc(sizeof(int**) * 9);
	while (i < 9)
		tab[i++] = (int*)malloc(sizeof(int*) * 9);
	tab = ft_extract(av + 1);
	if (!base_ok(tab))
		return (0);
	if (ft_resolve(tab, 0))
		ft_printsudoku(tab);
	else
		ft_putstr("Erreur\n");
	return (0);
}
