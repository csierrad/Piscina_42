#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (nb != 0 && nb != 1)
	{
		return (1);
	}
	return (0);
}

int ft_find_next_prime(int nb)
{
	if(ft_is_prime(nb) == 1)
	{
		return (nb);
	}

	while(ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int main()
{
	printf("%d", ft_find_next_prime(6));
	return 0;
}