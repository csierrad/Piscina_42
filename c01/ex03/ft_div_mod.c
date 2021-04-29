/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:00:41 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:00:43 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}



int main()
{
	int a = 21;
	int b = 10;
	int coci;
	int res;
	ft_div_mod(a, b, &coci, &res);
	printf("cociente:%d resto:%d", coci, res);
	return 0;
}
