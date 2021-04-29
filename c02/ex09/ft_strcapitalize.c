#include <stdio.h>

int minuscula(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[i - 1] < 'a' || str[i - 1] > 'z')
		{
			if(str[i - 1] < 'A' || str[i - 1] > 'Z')
			{
				if(str[i - 1] < '0' || str[i - 1] > '9')
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int mayuscula(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		{
			return 1;
		}
		else
		{
			if(str[i - 1] >= '0' && str[i - 1] <= '9')
			{
				return 1;
			}
			else
			{
				if(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				{
					return 1;
				}
			}
		} 
	}
	return 0;
}



char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	aux;

	i = 1;
	j = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		aux = str[0] - 'a';
		str[0] = 'A' + aux;
	}
	while (str[i] != 0)
	{
		if(minuscula(str, i) == 1)
		{
			aux = str[i] - 'a';
			str[i] = 'A' + aux;
		}


		if (mayuscula(str, i) == 1)
		{
			aux = str[i] - 'A';
			str[i] = 'a' + aux;
		}
		i++;
	}
	return (str);
}



int main()
{
    int i = 0;
    char cadena[] = "salut, comment tu vas ? 42Mots quArante-deux; cinquante+eT+un";
    ft_strcapitalize(cadena);

    while(cadena[i] != 0)
    {
        printf("%c", cadena[i]);
        i++;        
    }

    return 0;
}