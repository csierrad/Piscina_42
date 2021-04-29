unsigned int ft_atoi_check(char *str);
int ft_check_nbr(char *nbr)
{
	int s;
	int i;

	s = 1;
	i = 0;
	while (nbr[i] && s)
	{
		if (!((nbr[i] <= '9') && (nbr[i] >= '0')))
		{
			s = 0;
		}
	i++;	
	}
	if (!(ft_atoi_check(nbr)) && s)
		s = 0;
	return (s);
}
//comprueba que nbr introducido es correcto (no contiene simbolos raros, ni es mayor que un unsigned int)
