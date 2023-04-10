#include "../../libft.h"

char	*ft_strncpy(char *dest, const char *src, t_u32 n)
{
	t_u32	c;
	
	c = 0;
	if (n <= 0)
	{
		return (NULL);
	}
	while (src[c] != '\0' && c < (n - 1))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < (n - 1))
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
