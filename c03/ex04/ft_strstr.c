#include <stdio.h>
#include <string.h>

int isEqual(char *to_find, char *str, int i)
{
	int cont;
	int j;

	cont = 0;
    j = 1;
    while(to_find[j] != 0)
    {
		if(str[i + j] == to_find[j])
		{
			cont++;
		}
		j++;
	}
	if(cont == j - 1)
	{
		return (1);
	}
	return (0);
}


char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
	int aux;

	if (to_find[0] == 0)
	{
		return (&str[0]);
	}
    while(str[i] != 0)
    {
        if(str[i] == to_find[0])
        {
            aux = isEqual(to_find, str, i);
			if(aux == 1)
			{
				return &str[i];
			}
        }        
        i++;
    }
    return (0);
}


int main()
{
    char str[] = "";
    char to_find[] = "asda";
    char *res;
	char *res1;

    res = ft_strstr(str, to_find);
	res1 = strstr(str, to_find);
    
    printf("res: %s\n", res);
	printf("sol: %s\n", res1);

    return 0;
}