#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int fact = 1;

	if (nb < 0)
		return (0);
	while(nb != 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

int main()
{
	//int n = "f";
	printf("%d", ft_iterative_factorial("f"));
	return 0;
}