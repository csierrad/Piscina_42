#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    char null = 0;
    int aux = 0;
    
    while(str[i] != null)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            aux = str[i] - 'A';
            str[i] = 'a' + aux;
        }
        i++;
    }
}

int main()
{
    int i = 0;
    char null = 0;
    char cadena[] = "HOLA BUENAS";
    ft_strlowcase(&cadena);

    while(cadena[i] != null)
    {
        printf("%c", cadena[i]);
        i++;        
    }
    return 0;
}