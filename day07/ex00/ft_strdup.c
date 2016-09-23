/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 05:08:40 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/08 22:30:20 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		j;
	char	*str2;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	str2 = (char*)malloc(sizeof(*str) * (i + 1));
	if (!str2)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str2[j] = str[j];
		j++;
	}
	str2[j] = '\0';
	return (str2);
}
