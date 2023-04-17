#include "../../libft.h"

char	*ft_substr(char const *s, t_u32 start, t_size len)
{
	t_u32	c;
	t_u32	w;
	char	*ss;

	c = 0;
	while (s[c + start] != '\0' && c < len)
	{
		c++;
	}
	ss = malloc(sizeof(char) * (c + 1));
	if (!ss)
		return (NULL);
	c = 0;
	while (s[c + start] != '\0' && c < len)
	{
		ss[c] = s[c + start];
		c++;
	}
	ss[c] = '\0';

	return ss;
}
/*
int	main()
{
	char	*str = "Lolazo";

	printf("Output -> %s\n", ft_substr(str, 2, 2));
	printf("Output -> %s\n", ft_substr(str, 0, 3));
	printf("Output -> %s\n", ft_substr(str, 1, 10));
}
*/
