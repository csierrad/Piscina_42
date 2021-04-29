#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			aux = s1[i] - s2[i];
			return (aux);
		}
		i++;
	}
	return (aux);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int n, char **arg)
{
	int i = 0;
	int j = 2;
	int k = 1;
	char *aux;

	while (i < n)
	{
		j = 2;
		while (j < n)
		{
			if (ft_strcmp(arg[j - 1], arg[j]) > 0)
			{
				aux = arg[j - 1];
				arg[j - 1] = arg[j];
				arg[j] = aux;
			}
			j++;
		}
		i++;
	}
	while (k < n)
	{
		ft_putstr(arg[k]);
		k++;
	}
	return (0);
}