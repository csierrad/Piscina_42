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

int main()
{
	printf("%d", ft_is_prime(1));
	return 0;
}