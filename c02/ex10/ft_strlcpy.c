#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int length = 0;
    int i = 0;

    while(src[i] != 0)
    {
        length++;
        i++;
    }

    i = 0;
    if(length < size)
    {
        while(i < length)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    else
    {
        while(i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    return length;
}

int main()
{
    char origin[] = "assdf";
    char copy[] = "c";
    int size = 23;
    int i = 0;
    int length = ft_strlcpy(&copy, &origin, size);

    printf("longitud: %d\n", length);

    while(copy[i] != 0)
    {
        printf("%c", copy[i]);
        i++;        
    }

    return 0;
}