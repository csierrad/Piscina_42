#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[k] != 0)
	{
		k++;
	}
	while (j < (size - i - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[size - 1] = 0;
	return (i + k);
}


int main()
{
	char dest[10] = "Hola ";
    char src[] = "buenas";
    int size = 10;
	char dest1[10] = "Hola ";

    unsigned int i = ft_strlcat(dest, src, size);
	unsigned int j = strlcat(dest1, src, size);

    printf("i: %d ; res: %s\n", i, dest);
    printf("j: %d ; sol: %s", j, dest1);
    return 0;
}