#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while(dest[i] != 0)
    {
        i++;
    }

    while( src[j] != 0)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
	dest[i] = 0;
	return dest;
}


int main()
{
    char src[] = "buenas";
    char dest[20] = "Hola ";
	char src1[] = "buenas";
    char dest1[20] = "Hola ";

    ft_strcat(dest, src);
	strcat(dest1, src1);

    printf("des: %s\n", dest);
    printf("res: %s\n", dest1);

    return 0;
}