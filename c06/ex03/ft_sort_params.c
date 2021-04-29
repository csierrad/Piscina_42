#include <unistd.h>

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

void	ft_putstr(char **str, int n)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (k < n)
	{
		i = 0;
		while (str[k][i] != 0)
		{
			write(1, &str[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
}

int	main(int n, char **arg)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 2;
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
	ft_putstr(arg, n);
	return (0);
}
