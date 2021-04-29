#include "header.h"

void	ft_free_malloc (char **dict_def)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		free(dict_def[i]);
		i++;
	}
}
