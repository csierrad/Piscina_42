/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:00:57 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:00:59 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int cociente;
	int resto;

	cociente = *a / *b;
	resto = *a % *b;

	*a = cociente;
	*b = resto;
}

int main()
{
	int a = 21;
	int b = 10;
	printf("a: %d b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d b: %d", a, b);
	return 0;
}
