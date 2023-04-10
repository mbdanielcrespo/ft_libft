#include "../../libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	t_i32	c;
	t_i32	w;

	c = 0;
	w = 0;
	while (s1[c] != '\0')
	{
		c++;
	}
	while (s2[w] != '\0')
	{
		s1[c] = s2[w];
		c++;
		w++;
	}
	s1[c] = '\0';
	return (s1);
}
