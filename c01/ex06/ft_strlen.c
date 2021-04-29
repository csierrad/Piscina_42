/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:01:19 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:01:31 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    char nulo = 0;

    while (str[i] != nulo)
    {
        i++;
    }
    return i;
}


int main()
{
    char cadena[] = "hola buenass";
    int cont = ft_strlen(&cadena);
    printf("%d\n", cont);

    return 0;
}
