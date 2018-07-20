/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 18:02:32 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/07 10:44:12 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nbr)
{
	char c;

	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if(nbr <= 9)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	main(int argc, char **argv)
{
	if(argv[0])
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
