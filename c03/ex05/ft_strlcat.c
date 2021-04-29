#include <stdio.h>
#include <string.h>

int srcLength(char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}

	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = srcLength(dest);
	j = 0;
	k = srcLength(src);
	while (j < (size - i - 1) && (src[j] != 0))
	{
		dest[i + j] = src[j];
		j++;
	}
	if(j - 1 < k)
	{
		dest[size - 1] = 0;
	}
	else
	{
		dest[i + j] = 0;
	}
	return (i + k);
}


int main()
{
	char dest[10] = "hola";
    char src[] = " buenas tardes";
    int size = 10;
	char dest1[10] = "hola";

    unsigned int i = ft_strlcat(dest, src, size);
	unsigned int j = strlcat(dest1, src, size);

    printf("i: %d ; mio: %s\n", i, dest);
    printf("j: %d ; strlcat: %s\n", j, dest1);
    return 0;
}