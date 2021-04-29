/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:51:57 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/25 12:24:58 by carce-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	ft_generate_array_check (int *dict_nb)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (1)
	{
		dict_nb[i] = nb;
		if (nb < 20)
			nb++;
		else if (nb < 100)
			nb += 10;
		else if (nb < 1000)
			nb *= 10;
		else if (nb < 1000000000)
			nb *= 1000;
		else
			break ;
		i++;
	}
}

void	ft_iterate_str (char *buf, char **dict_def, int *dict_nb)
{
	int		i;
	int		nb;
	int		check;
	int		j;

	j = 0;
	i = 1;
	while (buf[j])
	{
		if (buf[j] == '\n')
			i = 0;
		if (i == 1 || j == 0)
		{	
			check = ft_check_line(buf + j);
			if (check != -1)
			{
				nb = ft_get_number(buf + j);
				check = ft_search_number(nb, dict_nb);
				if (check != -1)
					dict_def[check] = ft_get_printables(buf + j);
			}
		}
		i++;
		j++;
	}
}

//Funcion que se encarga de comprobar el archivo que hemos leido
int	ft_check_dict_def(char **dict_def)
{
	int		i;

	i = 0;
	while (i < 32)
	{
		if (!dict_def[i])
			return (0);
		i++;
	}
	return (1);
}

int ft_check_first_line(char *buf, struct s_def def)
{
	int	i;

	i = 0;
	while (i != '\n'){
		if (i == 0)
			def.lines = buf[i] - '0';
		else if (i == 1)
			def.emp = buf[i];
		else if (i == 2)
			def.obs = buf[i];
		else if (i == 3)
			def.full = buf[i];
		i++;
	}
	if (def.emp == def.obs || def.obs == def.full || def.emp == def.full)
		i = -1;
	if (i < 4 || i > 4)
		i = -1;
	return (i);
}

int ft_count_cols(char *buf)
{
	int	i;

	i = 0;
	while (i != '\n')
		i++;
	return i;
}

void ft_create_map(char *buf, char **map){
	int	i;

	i = 0;
	while (i != '\n' || i != '\0')
	{
		
		i++;
	}
	return i;
}

int ft_check_buff(char *buf){
	char	**map;
	struct s_def	def;
	struct s_check	ch_map;
	int start;
	int cols;

	start = ft_check_first_line(buf, def);
	if (start == -1)
		return 0;
	cols = ft_count_cols(buf + start);
	(void) map[def.lines][cols];
	ch_map.posx = 0;
	ch_map.posy = 0;
	ch_map.max = 0;
	ch_map.x = 0;
	ch_map.y = 0;
	ft_create_map(map);
	i = ft_big_square(def, ch_map, map);


	//Aqui igual necesitaria malloc




}

//Funcion que se encarga de leer el archivo y comprobarlo
//Habria que implementar si el archivo es más grande.
int	ft_read (char *file, char **dict_def, int *dict_nb)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open (file, O_RDONLY);
	if (fd == -1)
	{
		write (1, "Dict Error\n", 11);
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_iterate_str (buf, dict_def, dict_nb);
	if (ft_check_dict_def(dict_def) == 0)
	{
		write (1, "Dict Error\n", 11);
		return (0);
	}
	close(fd);
	return (1);
}
