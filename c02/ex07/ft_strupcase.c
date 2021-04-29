#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i = 0;
    char null = 0;
    int aux = 0;
    
    while(str[i] != null)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            aux = str[i] - 'a';
            str[i] = 'A' + aux;
        }
        i++;
    }
}

int main()
{
    int i = 0;
    char null = 0;
    char cadena[] = "hola buenas";
    ft_strupcase(&cadena);

    while(cadena[i] != null)
    {
        printf("%c", cadena[i]);
        i++;        
    }
    return 0;
}