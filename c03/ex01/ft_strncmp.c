#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0') && (i < n))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}



int main()
{
    char a[] = "qweq";
    char b[] = "qwEq";
    int n = 8;
    int res = ft_strncmp(a, b, n);
	int i = strncmp(a, b, n);
    printf("res: %d\n", res);
	printf("sol: %d\n", i);
    return 0;
}