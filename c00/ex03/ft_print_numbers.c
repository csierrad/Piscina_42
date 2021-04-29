#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	num;

	i = 0;
	num = '0';
	while (i < 10)
	{
		write(1, &num, 1);
		num = num + 1;
		i++;
	}
}

int	main (void)
{
	ft_print_numbers();
	return (0);
}
