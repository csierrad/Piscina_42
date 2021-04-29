/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:01:10 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:01:13 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	char c;
	int i = 0;
	char nulo = 0;
	
	while(str[i] != nulo)
	{
			c = str[i];
			write(1, &c, 1);
			i++;
	}	
	return;
}

int main()
{
	char string[] = "hola buenas";
	ft_putstr(&string);
	return 0;
}
