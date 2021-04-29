#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    char null = 0;

    while(i < n)
    {
        if(src[i] == null)
        {
            while(i < n)
            {
                dest[i] = null;
                i++;
            }
            return;
        }
        else
        {
            dest[i] = src[i];
        }
        i++;
    }
}



int main()
{
    char origin[] = "hola_buenas";
    char copy[12] = "";
    int i = 0;
    int max = 16;
    char null = 0;
    ft_strncpy(&copy, &origin, max);

    while(copy[i] != null)
    {
        printf("%c", copy[i]);
        i++;        
    }

    return 0;
}