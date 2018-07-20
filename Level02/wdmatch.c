/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:28:10 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/07 12:43:06 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while(argv[2][j] != '\0')
		{
			if(argv[2][j++] == argv[1][i])
				i++;
			if (!argv[1][i])
				ft_putstr(argv[1]);
		}
	}
	ft_putstr("\n");
	return(0);
}
