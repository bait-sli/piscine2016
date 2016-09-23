/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 23:56:59 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/02 00:03:35 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 void ft_putchar (char c)
{
	write(1 ,&c, 1);
}

void	ft_print_comb(void)
{
		char ns[3];

			ns[0] = '0';
				ns[1] = '1';
					ns[2] = '2';
						while (ns[0] <= '7' && ns[1] <= '8' && ns[2] <= '9')
								{
											if (ns[0] != ns[1] && ns[1] != ns[2])
														{
																		ft_putchar(ns[0]);
																					ft_putchar(ns[1]);
																								ft_putchar(ns[2]);
																											if (ns[0] != '7' || ns[1] != '8' || ns[2] != '9')
																															{
																																				ft_putchar(',');
																																								ft_putchar(' ');
																																											}
																													}
													ns[2]++;
															if (ns[2] == '9' + 1)
																			ns[2] = ns[1]++ + 1;
																	if (ns[1] == '8' + 1)
																					ns[1] = ns[0]++ + 1;
																		}
}



int main(void)
{
	ft_name........();
	return(0);
}
