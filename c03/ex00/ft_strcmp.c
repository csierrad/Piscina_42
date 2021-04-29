#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int aux = 0;

    while(s1[i] != 0 || s2[i] != 0)
    {
        if(s1[i] != s2[i])
        {
           aux = s1[i] - s2[i];
		   return aux;
        }
        i++;
    }
	return (aux);
}


int main()
{
    char a[] = "hola";
    char b[] = "hola";
    int res = ft_strcmp(a, b);
	int i = strcmp(a,b);
    printf("res: %d\n", res);
	printf("sol: %d\n", i);
    return 0;
}
