/*char	*ft_strnstr(const char *big, const char *str, int n)
{
	int	c;
	int	w;

	c = 0;
	w = 0;
	if (!str || !*str)
	{
		return ((char *)big);
	}
	while (big[c] != '\0' && c < n)
	{
		while (big[c + w] == str[w] && (c + w) < n)
		{
			if (str[w] == '\0')
			{
				return (&big[c]);
			}
			w++;
		}
		w = 0;
		c++;
	}
	return (NULL);
}*/
