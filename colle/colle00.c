/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgareche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 20:28:21 by dgareche          #+#    #+#             */
/*   Updated: 2016/09/04 23:02:25 by dgareche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putline(char c1, char c2, char c3, int inb);

int	colle(int icolonne, int iligne)
{
	int i;

	i = 0;
	if ((icolonne == 0) || (iligne == 0))
	{
		return (0);
	}
	ft_putline('o', '-', 'o', icolonne);
	if (iligne > 2)
	{
		while (i < iligne - 1)
		{
			ft_putline('|', ' ', '|', icolonne);
			i++;
		}
	}
	if (iligne > 1)
	{
		ft_putline('o', '-', 'o', icolonne);
	}
	return (0);
}
