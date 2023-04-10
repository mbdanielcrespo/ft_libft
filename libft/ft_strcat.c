#include <libft.h>

char	*strcat(char *s1, char *s2)
{
	int	c;
	int	w;

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
