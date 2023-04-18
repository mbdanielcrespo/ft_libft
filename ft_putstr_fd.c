#include "../libft.h"

void	ft_putstr_fd(char *s, t_i32 fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int	main()
{
	ft_putstr_fd("Hello", 1);
}
*/
