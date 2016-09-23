/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgareche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 21:43:52 by dgareche          #+#    #+#             */
/*   Updated: 2016/09/04 23:05:10 by dgareche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putline(char c1, char c2, char c3, int inb);

int	colle(int icolonne, int iligne)
{
	int i;

	i = 0;
	if ((iligne == 0) || (icolonne == 0))
	{
		return (0);
	}
	ft_putline('/', '*', '\\', icolonne);
	if (iligne > 2)
	{
		while (i < iligne - 1)
		{
			ft_putline('*', ' ', '*', icolonne);
			i++;
		}
	}
	if (iligne > 1)
	{
		ft_putline('\\', '*', '/', icolonne);
	}
	return (0);
}
