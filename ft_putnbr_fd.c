#include "libft.h"

void	ft_putnbr_fd(t_i32 n, t_i32 fd)
{
	write(fd, ft_itoa(n), ft_strlen(ft_itoa(n)));
}
