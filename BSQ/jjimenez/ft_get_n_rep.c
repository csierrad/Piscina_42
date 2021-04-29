/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carce-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 20:20:54 by carce-bo          #+#    #+#             */
/*   Updated: 2021/04/25 13:24:33 by carce-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
//#include <stdlib.h>

//int		ft_check_n(char *str);
//int		ft_check_sp(char *str, int i);
//int		ft_check_sp2(char *str, int i);
//int		ft_check_print(char *str, int i);
//char	*ft_get_string(char *str, int i, int j);
//char	*ft_get_printables(char *str);
//long	ft_get_number(char *str);
//long	ft_atoi_rush(char *str);

//ft_get_number:
//Función que de una línea correcta del diccionario,
//devuelve el numero long corresponndiente a la entrada
//del diccionario.
long	ft_get_number(char *str)
{
	int		j;
	char	*str_nbr;
	long	nbr;

	j = ft_check_n(str);
	str_nbr = ft_get_string(str, 0, j);
	nbr = ft_atoi_rush(str_nbr);
	free(str_nbr);
	if (nbr < -1 || nbr > 10000000000)
		return (-1);
	else
		return (nbr);
}

//ft_get_printables:
//Función que de una línea correcta del diccionario
//devuelve una string correspondiente a la cadena
//de imprimibles (la representación del numero).
char	*ft_get_printables(char *str)
{
	int		i;
	int		j;
	char	*rep;

	i = ft_check_n(str);
	i = ft_check_sp(str, i);
	i = ft_check_sp2(str, i);
	j = ft_check_print(str, i);
	rep = ft_get_string(str, i, j);
	return (rep);
}

//ft_get_string:
//Función que dados dos índices i y j, me devuelve
//de la string argumento la string que hay desde
//str[i] hasta str[j].
char	*ft_get_string(char *str, int i, int j)
{
	char	*output_str;
	int		k;

	k = 0;
	output_str = (char *)malloc((j - i) * sizeof(char));
	while (i + k < j)
	{
		output_str[k] = str[i + k];
		k++;
	}
	output_str[k] = '\0';
	return (output_str);
}

//Este atoi devuelve un -1 si el número no es válido
//No válido significa que o bien sea demasiado grande (+ 10 cifras)
//o bien sea negativo. En caso de ser de diez cifras pero
//mayor que 2**32, el programa que lo utilice tendrá que
//dar el error.
long	ft_atoi_rush(char *str)
{
	int		j;
	long	n;
	int		k;

	k = 0;
	n = 0;
	j = 11;
	while (str[k] >= '0' && str[k] <= '9')
	{
		if (k < j)
			n = n * 10 + str[k] - '0';
		else
		{
			n = -1;
			break ;
		}
		k++;
		if (n == 0)
			j++;
	}
	return (n);
}
