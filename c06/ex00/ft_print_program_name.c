#include <unistd.h>

int	main(int n, char **arg)
{
	n = 0;
	while (arg[0][n] != 0)
	{
		write(1, &arg[0][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}