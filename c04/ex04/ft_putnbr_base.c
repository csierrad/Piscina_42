#include <unistd.h>
#include <stdio.h>

int	digBase(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		i++;
	}
	return (i);
}

void	auxFunction(int j, int i, int nbr, char *base)
{
	int	k;
	int	aux;

	while (j >= 0)
	{
		aux = nbr;
		k = 0;
		while (k < j)
		{
			aux = aux / i;
			k++;
		}
		write(1, &base[aux % i], 1);
		j--;
	}
}

int	masYmenos(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	errores(int digBase, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (digBase == 0 || digBase == 1)
	{
		return (0);
	}
	while (i < digBase)
	{
		j = i + 1;
		while (j < digBase)
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 0;
	i = digBase(base);

	if(errores(i, base) == 0 || masYmenos(base) == 0)
	{
		printf("Error");
		return;
	}

	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	
	aux = nbr;

	while (aux / i != 0)
	{
		aux = aux / i;
		j++;
	}
	write(1, &base[aux % i], 1);
	j--;
	auxFunction(j, i, nbr, base);
}


int	main()
{
	int num = 34693;
	char base[] = "1";
	ft_putnbr_base(num, base);
	return 0;
}