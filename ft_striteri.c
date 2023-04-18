void	ft_striteri(char *s, void (*f)(t_u32, char *))
{
	t_u32	c;

	c = 0;
	if (!s || !f)
		return ;
	while (str[c] != '\0')
	{
		f(c, &s[c]);
		c++;
	}
}
