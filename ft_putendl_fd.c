#include "libft.h"

void	ft_putendl_fd(char *s, t_i32 fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, '\n', 1);
}
