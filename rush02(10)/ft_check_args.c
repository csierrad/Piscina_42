//si hay error ponemos error a 0, sino hay, ponemos error a 1. (error = 0  es malo) (error = 1 es bueno)
int	ft_check_nbr(char *nbr);
void	ft_putstr(char *str);
int	ft_check_dictname(char *str);
int	ft_check_args(int arg, char **argv)
{
	int error;

	error = 1;
	if (arg == 2)
	{
		if (!ft_check_nbr(argv[1]))
		{
			error = 0;
			ft_putstr("Error\n");
		}
	}
	else if (arg == 3)
	{
		if (!(ft_check_nbr(argv[2])))
		{
			error = 0;
			ft_putstr("Error\n");
		}
		if (!(ft_check_dictname(argv[-1])))
		{
			error = 0;
			ft_putstr("Dict Error\n");
		}
	}
	return (error);
}
