unsigned int ft_atoi_check(char *str)
{
	unsigned int	num;
	while (*str == '0')
		str++;
	num = 0;
	if (*str == 0)
		return (1);
	while (*str != '\0')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (!num)
		return (0);
	return(1);
}
