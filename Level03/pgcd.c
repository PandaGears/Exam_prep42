/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:03:45 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/19 07:52:21 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int nb1;
	int nb2;

	if(argc == 3)
	{
		if((nb1 = atoi(argv[1])) > 0 && (nb2 = atoi(argv[2])) > 0)
		{
			while(nb1 != nb2)
			{
				if(nb1 > nb2)
					nb1 -= nb2;
				else
					nb2 -= nb1;
			}
			printf("%d", nb1);
		}
	}
	printf("\n");
	return(0);
}
