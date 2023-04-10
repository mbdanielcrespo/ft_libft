#include "../../libft.h"

char	*ft_strncat(char *s1, const char *s2, t_u32 n)
{
	t_u32	c;
	t_u32	w;

	c = 0;
	w = 0;
	while (s1[c] != '\0')
	{
		c++;
	}
	while (s2[w] != '\0' && w < (n - 1))
	{
		s1[c] = s2[w];
		c++;
		w++;
	}
	s1[c] = '\0';
	return (s1);
}

