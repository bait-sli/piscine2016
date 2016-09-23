/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 07:21:28 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/11 17:54:03 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	char *tmp1;
	char *tmp2;

	tmp1 = s1;
	tmp2 = s2;
	if (*tmp1 != '\0' && *tmp2 == '*')
		return (nmatch(tmp1 + 1, tmp2) + nmatch(tmp1, tmp2 + 1));
	if (*tmp1 == '\0' && *tmp2 == '*')
		return (nmatch(tmp1, tmp2 + 1));
	if (*tmp1 == *tmp2 && *tmp1 != '\0' && *tmp2 != '\0')
		return (nmatch(tmp1 + 1, tmp2 + 1));
	if (*tmp1 == *tmp2 && *tmp1 == '\0' && *tmp2 == '\0')
		return (1);
	return (0);
}
