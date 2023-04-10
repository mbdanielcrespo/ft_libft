#include "../../libft.h"

t_size	ft_strlcpy(char *dest, const char *src, t_size size)
{
	t_size c;

	c = 0;
	if (size <= 0)
	{
		return (ft_strlen(src));
	}
	while (src[c] != '\0' && c < (size - 1))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (ft_strlen(src));
}
