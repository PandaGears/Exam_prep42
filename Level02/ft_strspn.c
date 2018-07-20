/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:16:34 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/12 07:54:05 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(*s)
	{
		if(s[i] == accept[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
		if(accept[j] == '\0')
			return(i);
	}
	return(i);
}
