/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tradlof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:32:42 by tradlof           #+#    #+#             */
/*   Updated: 2018/07/20 08:32:57 by tradlof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
void print_tab(char **tab, t_point size);

void actual_flood_fill(char **tab, char colour, t_point size, int x, int y)
{
	if (x < 0 || y < 0)
		return ;
	if (x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != colour)
		return ;
	tab[y][x] = 'F';
	print_tab(tab, size);
	actual_flood_fill(tab, colour, size, x + 1, y);
	actual_flood_fill(tab, colour, size, x - 1, y);
	actual_flood_fill(tab, colour, size, x, y + 1);
	actual_flood_fill(tab, colour, size, x, y - 1);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	actual_flood_fill(tab, tab[begin.y][begin.x], size, begin.x, begin.y);
}
