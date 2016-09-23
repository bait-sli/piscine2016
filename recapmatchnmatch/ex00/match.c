/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tmp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 05:22:54 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/11 17:47:20 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	char *tmp1;
	char *tmp2;

	tmp1 = s1;
	tmp2 = s2;
	if (*tmp1 != '\0' && *tmp2 == '*')
		return (match(tmp1 + 1, tmp2));
	if (*tmp1 == '\0' && *tmp2 == '*')
		return (match(tmp1, tmp2 + 1));
	if (*tmp1 == *tmp2 && *tmp1 != '\0' && *tmp2 != '\0')
		return (match(tmp1 + 1, tmp2 + 1));
	if (*tmp1 == *tmp2 && *tmp1 == '\0' && *tmp2 == '\0')
		return (1);
	return (0);
}
