/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 15:44:03 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/07 14:21:31 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if(argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if(argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if(argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if(argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return(0);
}
