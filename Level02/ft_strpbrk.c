/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:39:36 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/10 09:47:44 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

char	*ft_strpbrk(const char *str, const char *c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(c);
	while (*str)
	{
		while (i < len)
		{
			if (c[i] == *str)
				return ((char*)str);
			i++;
		}
		str++;
	}
	return (NULL);
}
