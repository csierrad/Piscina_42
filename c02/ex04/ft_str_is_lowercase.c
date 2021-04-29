#include <stdio.h>

int ft_str_is_lowercase(char *str)
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
        if(str[i] < 'a' || str[i] > 'z')
        {
            cont++;
        }
        i++;
    }
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
    char cadena[] = "asdasdgc";
    int i = ft_str_is_lowercase(&cadena);
    printf("%d", i);
    return 0;
}