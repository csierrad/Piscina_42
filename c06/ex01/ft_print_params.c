#include <unistd.h>

int	main(int n, char **arg)
{
	int i = 1;
	int j;
	
	while (i < n)
	{
		j = 0;
		while (arg[i][j] != 0)
		{
			write(1, &arg[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
