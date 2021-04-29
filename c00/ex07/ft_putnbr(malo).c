#include <unistd.h>

void	print (int num)
{
	char	n;

	n = '0' + num;
	write (1, &n, 1);
}

int	getLength (int num)
{
	int		cont;

	cont = 1;
	while (num > 10)
	{
		num = num / 10;
		cont++;
	}
	return (cont);
}

void	ft_putnbr(int nb)
{
	int		length;
	int		num[length];
	int		i;
	int		j;
	int		aux;

	length = getLength(nb);
	i = length - 1;
	j = 0;
	aux = nb;
	while (i >= 0)
	{
		num[i] = aux % 10;
		aux = aux / 10;
		i--;
	}
	
	while (j < length)
	{
		print(num[j]);
		j++;
	}

}



int main(void)
{
	ft_putnbr (5985394);
	return (0);
}
