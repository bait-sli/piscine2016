/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 23:01:48 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/09 23:39:18 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	char	**str_split;
	char	**str_tmp;
	int		len;
	int		i;
	int		nb_word;

	nb_word = 0;
	len = 0;
	i = 0;
	while (str)
	{
		if (str[len] != 9 || str[len] != 32 || str[len] != '\n')
			nb_word++;
		len++;
	}
	*str_split = (char*)malloc(sizeof(char) * (len + 1));
	len = 0;
	while (len < nb_word)
	{
		i = 0;
		while (str[i] != 9 || str[i] != 32 || str[i] != '\n' || str[i] != '\0')
		{
			str_tmp[i] = str;
			i++;
		}
		str_split[len] = *str_tmp;
		len++;
	}
	return (str_split);
}
