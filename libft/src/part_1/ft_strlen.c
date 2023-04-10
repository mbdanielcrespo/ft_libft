#include "../../libft.h"

t_size	ft_strlen(const char *str)
{
	t_i32	c;
	
	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
