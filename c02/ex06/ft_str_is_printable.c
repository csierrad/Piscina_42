#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    char null = 0;
    int cont = 0;
    
    if(str[0] == null)
    {
        return 1;
    }
    
    while(str[i] != null)
    {
        if(str[i] < 31)
        {
            cont++;
        }
        i++;
    }
    printf("cont:%d\n", cont);
    
    if(cont != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}



int main()
{
    char cadena[3];
    cadena[0] = 11;
    cadena[1] = 15;
    cadena[2] = 1;
    int i = ft_str_is_printable(&cadena);
    printf("%d", i);
    return 0;
}