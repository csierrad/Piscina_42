/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:51:57 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/24 19:48:40 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"

void	ft_prtchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

unsigned int	ft_parse_argv (char *argv)
{
	unsigned int	nb;
	int				i;
	int				j;

	i = 0;
	nb = 0;
	j = 11;
	while (argv[i] != '\0')
	{
		if (i < j && argv[i] >= '0' && argv[i] <= '9')
			nb = nb * 10 + (argv[i] - 48);
		i++;
		if (nb == 0)
			j++;
	}
	return (nb);
}

int	ft_check_argv (char *argv)
{
	unsigned int	nb;
	int				r;
	int				i;
	int				j;

	r = 1;
	i = 0;
	nb = 0;
	j = 11;
	while (r == 1 && argv[i] != '\0')
	{
		if (i < j && argv[i] >= '0' && argv[i] <= '9')
			nb = nb * 10 + (argv[i] - 48);
		else
			r = 0;
		if (nb == 0)
			j++;
		i++;
	}
	return (r);
}

int	ft_check_argc (int argc, char **argv)
{
	long	check_atoi;
	int		r;

	r = 1;
	if (argc == 2)
	{
		check_atoi = ft_atoi_rush(argv[1]);
		if (!(check_atoi == -1 || check_atoi > 4294967295))
			r = ft_check_argv(argv[1]);
		else
			r = 0;
	}
	else if (argc == 3)
	{
		check_atoi = ft_atoi_rush(argv[2]);
		if (!(check_atoi == -1 || check_atoi > 4294967295))
			r = ft_check_argv(argv[2]);
		else
			r = 0;
	}
	if (!r)
		write (1, "Error\n", 6);
	return (r);
}

int	main (int argc, char **argv)
{
	struct s_def	def;
	int				dict_nb[32];
	char			*dict_def[32];
	char			*file;
	char			salida[2000];	

	if (!ft_check_argc(argc, argv))
		return (1);
	if (argc == 2)
	{
		file = argv[1];
		if (!ft_read(file, dict_def, dict_nb))
			return (1);
	}
	else
		scanf ("%s", &buf);
	ft_generate_array_check(dict_nb);
	ft_putnbr(nb, dict_def, dict_nb, salida);
	ft_prtchar(salida);
	ft_free_malloc(dict_def);
}
