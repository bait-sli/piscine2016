/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bait-sli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 13:00:18 by bait-sli          #+#    #+#             */
/*   Updated: 2016/09/17 13:29:09 by bait-sli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	do_op(int lhs, int rhs, char op)
{
	if (op == '+')
		return (lhs + rhs);
	else if (op == '-')
		return (lhs - rhs);
	else if (op == '*')
		return (lhs * rhs);
	else if (op == '/')
		return (lhs / rhs);
	else if (op == '%')
		return (lhs % rhs);
	else
		return (0);
}
