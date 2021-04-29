#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    char null = 0;

    while(src[i] != null)
    {
        dest[i] = src[i];
        i++;
    }

    dest[i + 1] = '\0';
}

int main()
{
    char cadena1[] = "hola buenas";
    char cadena2[13] = "";
    int i = 0;
    char null = 0;
    ft_strcpy(&cadena2, &cadena1);

    while(cadena2[i] != null)
    {
        printf("%c", cadena2[i]);
        i++;        
    }


    return 0;
}