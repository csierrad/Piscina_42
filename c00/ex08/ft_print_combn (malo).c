#include <unistd.h>

void print (int num[], int n)
{
	int i = 0;
	while(i < n)
	{
	char n = '0' + num[i];
	write (1, &n, 1);
	i++;
	}

}

void ft_print_combn(int n)
{
	int com[n];
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < n)
	{
		com[i] =  0;
		i++;
	}

	i = 0;
	while(com[0] != 10) 
	{
		i = 0;
		while (i < 10 )
		{
			com[n - 1] =  com[n - 1] + 1;
			while(j < n)
			{
				if(com[j] == 10)
				{
					com[j + 1] = com[j + 1] + 1;
					com[j] = com[j + 1] + 1;
				}
			}
			print(com, n);

		}

	}


}





int main()
{
	
	ft_print_combn(4);
	return 0;
}