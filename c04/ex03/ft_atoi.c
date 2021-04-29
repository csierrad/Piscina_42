#include <stdio.h>
#include <stdlib.h>
int negativo(char *str, int i)
{
	int neg = 1;

	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		{
			neg = neg * (-1);
		}
		i++;
	}
	return neg;
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	neg = negativo(str, i);
	while ((str[i] == '+') || (str[i] == '-'))
	{
		i++;
	}
	while (str[i] >='0' && str[i] <='9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}


int main()
{
	char cadena[] = "  \t---+--+1234ab567";
	int i = ft_atoi(cadena);;
	int j = atoi("-1234ab567");
	printf("i: %d\n", i);
	printf("atoi: %d\n", j);
	return 0;
}