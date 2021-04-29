/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:01:54 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:01:55 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int aux;
    while (i < size / 2)
    {
        aux = tab[size - 1 - i];
        tab[size - 1 - i] = tab[i];
        tab[i] = aux;
        i++;
    }
}

int main()
{
    int n = 4;
    int array[5] = {0, 1, 2, 3};

    for(int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    ft_rev_int_tab(&array, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}
