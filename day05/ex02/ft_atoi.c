/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:04:01 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/06 17:53:26 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int i;
	int sign;

	sign = 0;
	result = 0;
	while (str && (*str == '\n' || *str == '\t' || \
				*str == '\v' || *str == ' ' || *str == '\f' || *str == '\r'))
		str++;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		sign = (str[i++] == '-') ? 1 : 0;
	while (str && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	if (sign == 1)
		return (result * -1);
	else
		return (result);
}
