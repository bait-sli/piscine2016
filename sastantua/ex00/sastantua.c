/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 11:34:28 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/22 03:21:46 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		calc_base(int dimention)
{
	int etage;
	int largeur;
	int etage_phase;

	etage = 1;
	largeur = 1;
	etage_phase = 4;
	while (etage <= dimention)
	{
		largeur += 2 * (2 + etage);
		etage++;
		largeur += etage_phase;
		if (etage % 2 && etage < dimention)
			etage_phase += 2;
	}
	largeur -= etage_phase;
	return (largeur);
}

void	put_line(int space)
{
	int pass;

	pass = 0;
	while (pass < space)
	{
		ft_putchar(' ');
		pass++;
	}
}

void	put_blocks(int dimention, int etage, int largeur, int phase)
{
	int porte;
	int pass;

	porte = 1 + 2 * ((etage - 1) / 2);
	pass = 0;
	while (pass < largeur)
	{
		if (pass == 0)
			ft_putchar('/');
		else if (pass == largeur - 1)
			ft_putchar('\\');
		else
		{
			if (etage == dimention && pass >= (largeur - porte) / 2 && \
					pass < (largeur + porte) / 2 && 2 + etage - phase <= porte)
				if (porte >= 5 && phase == 2 + etage - porte / 2 - 1 && \
					pass == (largeur + porte) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pass++;
	}
}

void	sastantua(int dimention)
{
	int	etage;
	int	taille;
	int	phase;
	int	largeur;

	if (dimention < 1)
		return ;
	etage = 1;
	largeur = 1;
	while (etage <= dimention)
	{
		taille = 2 + etage;
		phase = 0;
		while (phase < taille)
		{
			largeur += 2;
			put_line((calc_base(dimention) - largeur) / 2);
			put_blocks(dimention, etage, largeur, phase);
			ft_putchar('\n');
			phase++;
		}
		etage++;
		largeur += 4 + 2 * ((etage - 2) / 2);
	}
}

int main(void)
{
	sastantua(21);
}
