#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		c = 'a';
		c = c + i;
		write(1, &c, 1);
		i++;
	}
}

int	main (void)
{
	ft_print_alphabet();
	return ;
}
