#include "../../libft.h"

t_u32	ft_count(const char *s1, char ch)
{
	t_u32 c;
	t_u32 w;

	c = 0;
	w = 0;
	while (s1[c] != '\0')
	{
		if (s1[c] == ch)
		{
			w++;
		}
		c++;
	}
	return (w);
}

char	**ft_split(const char *s, char ch)
{
	t_u32	c;
	t_u32	n;
	t_u32	size;
	t_u32	start;
	char	**strs;

	c = 0;
	n = 0;
	start = 0;
	strs = (char **)malloc((ft_count(s, ch) + 2) * sizeof(char *));
	if (!strs)
	{
		return (NULL);
	}
	while (s[c] != '\0')
	{
		if (s[c] == ch || s[c + 1] == '\0')
		{
			if (s[c + 1] == '\0')
				size = c - start + 2;
			else
				size = c - start + 1;

			strs[n] = (char *)calloc((size + 1), sizeof(char));
			ft_strncpy(strs[n], &s[start], size);
			strs[n][size] = '\0';
			n++;
			start = c + 1;

		}
		c++;
	}
	strs[n] = NULL;
	return (strs);
}
