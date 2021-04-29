#include <unistd.h>

void	print(int n)
{
	char	c;

	c = '0' + n;
	write(1, &c, 1);
}

int	getLength(int n)
{
	int		i;

	i = 1;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	exp(int n)
{
	int		i;
	int		exp;

	i = 1;
	exp = 10;
	while (i < n - 1)
	{
		exp = exp * 10;
		i++;
	}
	return (exp);
}

void	ft_putnbr(int nb)
{
	int		n;
	int		i;
	int		aux;
	int		den;

	n = getLength(nb);
	i = 0;
	den = exp(n);
	while (i < n)
	{
		aux = nb / den;
		print(aux);
		nb = nb % den;
		den = den / 10;
		i++;
	}
}

int	main(void)
{
	ft_putnbr(2342);
	return (0);
}
