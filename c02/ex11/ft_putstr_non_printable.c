#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int aux;
    char hex1;
    char hex2;

    while(str[i] != 0)
    {
        if(str[i] <= 31)
        {
            write(1, "\\", 1);
            aux = str[i];
            hex1 = '0' + (aux / 16);
            if(aux % 16 < 10)
            {
                hex2 = '0' + (aux % 16);
            }
            else
            {
                hex2 = 'a' + ((aux % 16) - 10);
            }
            write(1, &hex1, 1);
            write(1, &hex2, 1);
        }
        else
        {
            write(1, &str[i], 1);
        }
        i++;
    }
}


int main()
{
    int i = 0;
    char cadena[] = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(&cadena);

    return 0;
}