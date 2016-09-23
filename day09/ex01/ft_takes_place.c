/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 19:36:35 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/08 22:05:50 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;
	
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour < 11)
		printf("%d.00 AM. AND %d.00 A.M.\n", h, (h + 1) % 12);
	if (hour == 11)
		printf("11.00 AM. AND 12.00 P.M.\n");
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else
		printf("%d.00 AM. AND %d.00 A.M.\n", h, (h + 1) % 12);
}

int main(void)
{
	ft_takes_place(23);
}
