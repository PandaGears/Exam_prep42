/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 07:36:11 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/10 09:11:56 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comp(char *str, char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (str[(unsigned int)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			str[(unsigned int)s1[i]] = 1;
		}
		i++;
	}
}

void	ft_union(char *s1, char *s2)
{
	char	str[256] = {0};

	ft_comp(str, s1);
	ft_comp(str, s2);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
