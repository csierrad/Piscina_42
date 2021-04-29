#include <unistd.h>

void	print (int i, int j, int k)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0' + i;
	c2 = '0' + j;
	c3 = '0' + k;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if ((100 * i + 10 * j + k) == 789)
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				if (i != j && i != k && j != k)
				{
					print(i, j, k);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main (void)
{
	ft_print_comb();
	return (0);
}
