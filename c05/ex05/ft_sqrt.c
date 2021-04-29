#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;
	int j;

	if (nb < 1)
		return (0);
	i = 1;
	j = 0;
	while (j != i)
	{
		j = i;
		i = ((nb / i) + i) / 2;
	}
	if (i * i != nb)
		return (0);
	return (i);	
}

int main()
{
	printf("%d", ft_sqrt(3));
	return 0;
}