/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carce-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:39:45 by carce-bo          #+#    #+#             */
/*   Updated: 2021/04/25 13:22:33 by carce-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Función que comprueba que una línea del diccionario es válida.

//int	ft_check_n(char *str);
//int	ft_check_sp(char *str, int i);
//int	ft_check_sp2(char *str, int i);
//int	ft_check_print(char *str, int i);
#include "header.h"

//ft_check_line:
//Función que recibe un puntero a un inicio de línea y
//devuelve 1 si la línea es correcta o -1 en caso contrario.
//El último detalle es que si después de acabarse los
//printeables se encuentra cualquier cosa que no sea un
//\n, también retorne -1.
int	ft_check_line(char *str)
{
	int	j;
	int	k;
	int	i;
	int	l;

	j = ft_check_n(str);
	if (j == 0)
		return (-1);
	k = ft_check_sp(str, j);
	if (k == -1)
		return (-1);
	i = ft_check_sp2(str, k);
	l = ft_check_print(str, i);
	if (l == i)
		return (-1);
	if (str[l] != '\n')
		return (-1);
	return (1);
}

//ft_check_n:
//Función que recorre el número de caracteres si los hay.
//Si devuelve un 0, significa que no hay número asociado y por
//tanto la línea es incorrecta. 
int	ft_check_n(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

//ft_check_sp:
//función que recorre los espacios desde que acaba el número.
//Si la función se encuentra con n espacios y luego un dos puntos,
//retorna el índice de la string en el cual se ha quedado.
// En cualquier otro caso, retorna -1 (caso línea incorrecta).
int	ft_check_sp(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		return (i + 1);
	else
		return (-1);
}

//ft_check_sp2:
//Función que checkea el número de espacios después de los 
//dos puntos. En este caso, todo output es correcto. Si no hay espacios,
//significa que la cadena que define el número está inmediatamente
//después de éstos.
int	ft_check_sp2(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	return (i);
}

//ft_checl_print:
//Función que calcula cuántos printeables hay después de los
//dos puntos y los espacios. En caso de haber algo que sea distinto 
//de un salto de línea después de estos printeables,
//la función ft_check_line se encargará de declarar que la 
//línea es incorrecta.
int	ft_check_print(char *str, int i)
{
	while (str[i] >= ' ' && str[i] < 127)
		i++;
	return (i);
}
