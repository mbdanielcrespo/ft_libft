#include "libft.h"

char	*ft_strdup(char *str)
{
	int	c;
	char	*cpy;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	cpy = (char *)malloc(sizeof(char) * (c + 1));
	c = 0;
	while (str[c] != '\0')
	{
		cpy[c] = str[c];
		c++;
	}
	cpy[c] = '\0';
	return (cpy);
}
