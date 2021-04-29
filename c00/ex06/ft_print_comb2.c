#include <unistd.h>

void	print (int i, int j, int k, int l)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + i;
	c2 = '0' + j;
	c3 = '0' + k;
	c4 = '0' + l;
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if ((i * 10 + j) == 98 && (k * 10 + l) == 99)
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, ", ", 2);
}

void	aux(int i, int j)
{
	int		k;
	int		l;

	k = 0;
	while (k < 10)
	{
		l = 0;
		while (l < 10)
		{
			if ((i * 10 + j) < (k * 10 + l))
			{
				print(i, j, k, l);
			}
			l++;
		}
		k++;
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{	
		j = 0;
		while (j < 10)
		{
			aux(i, j);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
