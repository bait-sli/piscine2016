/* ************************************************************************** */
/*                                                                            */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 21:15:16 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/01 21:42:06 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	char tab[4] = {0, 0, 0, 1};
	while (!((tab[0] == 9) && (tab[1] == 9)))
	{
		ft_putchar(tab[0] + 48);
		ft_putchar(tab[1] + 48);
		ft_putchar(' ');
		ft_putchar(tab[2] + 48);
		ft_putchar(tab[3] + 48);
		if (!((tab[0] == 9) && (tab[1] == 8) && (tab[2] == 9) && (tab[3] == 9)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}																									 tab[3]++;
		if ((tab[3] = tab[3] % 10) == 0)
			tab[2] = (tab[2] + 1);
		if (tab[2] == 10)
		{
			tab[2] = tab[0];
			tab[1]++;
			if ((tab[1] = tab[1] % 10) == 0)
			{
				tab[0]++;
				tab[3] = tab[1] + 1;
			}
		}
	}
}
