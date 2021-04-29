#ifndef HEADER_H
# define HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# define BUF_SIZE 4096

struc s_def
{
	int		lines;
	char	emp;
	char	obs;
	char	full;
	int		cols;
}

struct s_check
{
	int	posx;
	int	posy;
	int max;
	int x;
	int	y;
};

void			ft_generate_array_check (int *dict_nb);
int				ft_search_number (int nb, int *dict_nb);
void			ft_prtchar(char *str);
void			ft_print_number (int index, char **dict_def, char *salida);
unsigned int	ft_putbase(unsigned int nb, char **d_def, int *d_nb, char *s);
unsigned int	ft_putnbr_l(unsigned int nb, char **d_def, int *d_nb, char *s);
unsigned int	ft_putnbr(unsigned int nb, char **d_def, int *d_nb, char *s);
int				ft_check_line(char *str);
int				ft_check_n(char *str);
int				ft_check_sp(char *str, int i);
int				ft_check_sp2(char *str, int i);
int				ft_check_print(char *str, int i);
char			*ft_get_string(char *str, int i, int j);
char			*ft_get_printables(char *str);
long			ft_get_number(char *str);
long			ft_atoi_rush(char *str);
int				ft_read (char *file, char **dict_def, int *dict_nb);
void			ft_free_malloc (char **dict_def);
#endif