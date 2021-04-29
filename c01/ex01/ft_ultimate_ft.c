/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:00:07 by csierra-          #+#    #+#             */
/*   Updated: 2021/04/20 12:00:09 by csierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}



int main()
{
	int a = 0;
	int *p1;
	int *p2;
	int *p3;
	int *p4;
	int *p5;
	int *p6;
	int *p7;
	int *p8;

	p1 = &p2;
	p2 = &p3;
	p3 = &p4;
	p4 = &p5;
	p5 = &p6;
	p6 = &p7;
	p7 = &p8;
	p8 = &a;
	


	printf("%d  \n", a);
	ft_ultimate_ft(&p1);
	printf("%d", a);
	return 0;
}
