#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int	ft_check_dictname(char *str)
{
	int	fd;
	int s;
	s = 1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		s = 0;
	else
		close(fd);
	return (s);
}
