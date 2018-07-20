/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:12:25 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/19 08:29:32 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	gcd(unsigned int x,unsigned int y)
{
	return(y == 0 ? : x, gcd(y, x % y));
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	return(a * b / gcd(a, b));
}
