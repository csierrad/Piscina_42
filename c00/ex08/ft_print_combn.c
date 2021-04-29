#include <stdio.h>
#include <unistd.h>

int expo(int n)
{
    int i = 1;
    int exp = 10;

    while(i < n)
    {
        exp = exp * 10;
        i++;
    }
    // printf("%d", exp);
    return exp;
}

int valid (int num)
{
    int length = getLength(num);
    int i = 1;

    while (i < length)
    {
        if(num % 10 < (num / 10) % 10 || num % 10 == (num / 10) % 10)
        {
            // printf("1");
            return 1;
        }
        i++;
        num = num / 10;

    }
    // printf("0");
    return 0;
}

int getLength (int n)
{
    int i = 1;

    while(n / 10 != 0)
    {
        i++;
        n = n / 10;
    }
    return i;
}

void imp(int n, int ceros)
{
    char c = '0' + n;
    int i = 0;

    while (i < ceros)
    {
        write(1, "0", 1);
        i++;
    
    }
    

    write(1, &c, 1);

}


void ft_print_combn(int n)
{
    int num = 1;
    int lim = expo(n);
    int i = 0;
    int ceros;

    while(num < lim)
    {
        ceros = n - getLength(num);
        if(valid(num) == 0)
        {
            i = 0;
            while(i < ceros)
            {
                write(1, "0", 1);
                i++;
            }            
            printf("%d", num);
            printf(", ");
        }
        num++;
    }
}


int main()
{
    ft_print_combn(4);
    return 0;
}