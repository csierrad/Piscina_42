#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int j = 0;
    int aux;

    while(i < size)
    {
        j = 0;
        while(j < size)
        {
            if(tab[j] > tab[j + 1])
            {
                aux = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = aux;
            }
            j++;
        }
        i++;
    }

    for(int h = 0; h < size; h++)
    {
        printf("%d,", tab[h]);
    }

}



int main()
{
    int size = 5;
    int array[] = {4, 3, 5, 1, 0};
    ft_sort_int_tab(&array, size);

    
    return 0;
}