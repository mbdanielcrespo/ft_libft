void	ft_putchar_fd(t_i8 c, t_i32 fd)
{
	write(fd, &c, 1);
}
