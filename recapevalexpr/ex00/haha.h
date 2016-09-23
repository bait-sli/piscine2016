/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   haha.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 13:45:49 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/17 14:34:15 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAHA_H
# define HAHA_H

void	my_putchar(char c);
int		my_strlen(char *str);
void	my_put_nbr(int nbr);
int		do_op(int lhs, int rhs, char op);
char	*suppr_spaces(char *str);
int		my_parse_nbr(char **ps);
int		eval_expr_0(char **ps);
int		eval_expr_1(char **ps);
int		eval_expr(char *str);

#endif
