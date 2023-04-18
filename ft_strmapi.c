char	*ft_strmapi(char const *s, char (*f)(t_u32, t_i8))
{
	t_u32	c;
	char	*str;

	c = 0;
	if (!s || |!f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[c] != '\0')
	{
		str[c] = f(c, str[c]);
		c++;
	}
	return (str);
}
