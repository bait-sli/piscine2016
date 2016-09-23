/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:37:52 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/13 18:20:50 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new;

	i = 0;
	new = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}
