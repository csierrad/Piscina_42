/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:31:34 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/24 18:14:53 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

int	ft_check_corners (struct s_def def, struct s_check ch_map, char **map, int size)
{
	int	i;
	int j;

	i = ch_map.posy;
	j = ch_map.posx;
	if (map[i][j + size] == s_def.obs)
		return (1);
	if (map[i + size][j] == s_def.obs)
		return (1);
	if (map[i + size][j + size] == s_def.obs)
		return (1);
	return (0);
}

int	ft_big_square(struct s_def def, struct s_check ch_map, char **map)
{
	unsigned int	b;
	unsigned int	f;
	int				exist_name;

	i = ch_map.posy;
	j = ch_map.posx;
	size = 0;
	while ( (i + size) < s_def.lines || (j + size) < s_def.cols)
	{
		check = ft_check_corners(def, ch_map, map, size);
		size++;
		if (check == 1)
			break;
	}
	if (size > 1 && size > ch_map.max)
	{
		ch_map.max = size - 1;
		ch_map.x = ch_map.posx;
		ch_map.y = ch_map.posy;
	}
	if ((j + size) >= s_def.cols)
	{
		ch_map.y = ch_map.y++;
		ch_map.x = 0;
	}
	else
		ch_map.x = j + size;
	if ((i + size) >= s_def.lines)
		return (0);
	return (ft_big_square(def, ch_map, map));
}
