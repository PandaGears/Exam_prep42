/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 06:32:16 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/12 06:49:53 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
	int len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int i;
	char *cpy;

	i = -1;
	if(!src || !(cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return(NULL);
	while(src[++i])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return(cpy);
}

int main(void)
{
	char *str = NULL;

	str = "Derp";
	printf("%s", ft_strdup(str));
	return (0);
}
