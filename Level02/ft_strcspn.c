/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:16:34 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/12 07:50:45 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *s1 = s;
	const char *s2;

	while(*s1)
	{
		s2 = reject;
		while(*s2)
			if(*s1 == *s2)
				return(*s1 - s);
		s1++;
	}
	return(s1 - s);
}
