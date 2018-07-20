/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 06:54:55 by tradlof           #+#    #+#             */
/*   Updated: 2018/06/29 09:32:10 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char inter(char *str, char c, int len)
{
	 int i;

	 i = 0;
	 while(str[i] != '\0' && (i < len || len == -1))
		 if (str[i++] == c)
			 return (1);
	 return (0);
}

int	main(int argc, char** argv)
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			if (!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
