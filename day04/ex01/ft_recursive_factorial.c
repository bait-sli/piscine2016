/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 08:41:16 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/03 17:57:48 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb == 1) || (nb == 0))
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
