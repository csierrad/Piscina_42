#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int inicio = end;
	int final = start;
	int size = 0;
	int aux = inicio;
	int cont = 1;
	int i = 0;

	if(inicio < final)
	{
		while(aux != final)
		{
			cont++;
			aux--;
		}
	}
	else
	{
		while(aux != final)
		{
			cont ++;
			aux++;
		}
	}
	int *sol = malloc(cont);
	while(inicio != final)
	{
		if(inicio > final)
		{
			sol[i] = inicio;
			inicio--;
			i++;
		}
		else
		{
			sol[i] = inicio;
			inicio++;
			i++;
		}
	}
	sol[i] = final;
	return sol;
}