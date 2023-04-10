int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	c;
	
	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c] && c < (n - 1))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
