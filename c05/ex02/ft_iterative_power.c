#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int res = 1;

	i = 0;
	if (power < 0)
		return (0);
	if(power == 0)
		return (1);
	while(i < power)
	{
		res = res * nb;
		i++;
	}
	return res;
}

int main()
{
	int nb = 0;
	int power = 5;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}