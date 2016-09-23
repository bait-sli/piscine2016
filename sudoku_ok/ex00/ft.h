/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 04:02:01 by vgallois          #+#    #+#             */
/*   Updated: 2016/09/11 22:26:11 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>

int		base_ok(int **tab);
int		ft_resolve(int **tab, int pos);
int		ft_pos_ok(int k, int **tab, int x, int y);
int		**ft_extract(char **str);
void	ft_printsudoku(int **tab);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strlen(char *str);
#endif
