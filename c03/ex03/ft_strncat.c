#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
    char src[] = "buenas";
    char dest[20] = "Hola ";

	char src1[] = "buenas";
    char dest1[20] = "Hola ";

    int n = 3;
    
    ft_strncat(dest, src, n);
	strncat(dest1, src1, n);
    
	printf("des: %s\n", dest);
	printf("sol: %s\n", dest1);
    return 0;
}