#include <unistd.h>

void	ft_print_reverse_alphabet (void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 26)
	{
		c = 'z';
		c = c - i;
		write(1, &c, 1);
		i++;
	}
}

int	main (void)
{
	ft_print_reverse_alphabet();
	return (0);
}
