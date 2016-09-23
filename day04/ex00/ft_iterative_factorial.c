/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 06:40:25 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/03 18:12:26 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	if ((nb == 0) || (nb == 1))
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	else
	{
		while (i < nb)
		{
			i++;
			fact *= i;
		}
		return (fact);
	}
	return (fact);
}
