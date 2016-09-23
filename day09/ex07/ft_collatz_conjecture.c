/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:22:11 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/09 16:50:46 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base)
{
   	if (base != 1)
	{
		if ((base % 2) == 0)
			return (ft_collatz_conjecture(base / 2));
		else
			return (ft_collatz_conjecture((base * 3) + 1));
	}
	else
		return(0);
}

int main ()
{
	printf("le vol est %d"), ft_collatz_conjecture(13));
}
