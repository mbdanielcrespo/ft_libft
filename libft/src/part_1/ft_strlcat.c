#include "../../libft.h"

t_size	ft_strlcat(char *dest, const char *src, t_size n)
{
	t_size	c;
	t_size	d_len;

	c = 0;
	d_len = ft_strlen(dest);
	if (!n || d_len >= n)
	{
		return (ft_strlen(src) + n);
	}
	while (src[c] && c < (n - d_len - 1))
	{
		dest[d_len + c] = src[c];
		c++;
	}
	dest[d_len + c] = '\0';
	return (ft_strlen(src) + d_len);
}
