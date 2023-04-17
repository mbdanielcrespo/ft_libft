#include "../../libft.h"
/*
char	*ft_strchr(const char *str, t_u32 ch)
{
	t_u32	c;

	c = 0;
	printf();
	while (str[c] != '\0')
	{
		if (str[c] == ch)
		{
			return (&str[c]);
		}
		c++;
	}
	return (NULL);
}
*/
/*
static t_u32	ft_strncmp(const char *s1 , const char *set, t_u32 n)
{
	t_size	c;

	c = 0;
	while (s1[c] != '\0' && set[c] != '\0' && s1[c] == set[c], c < n)
	{	
		c++;
	}
	return (s1[c] - set[c]);
}
*/
static t_u32	is_in_set(char ch, const char *set)
{
	t_u32 c;

	c = 0;
	while (set[c] != '\0')
	{
		if (set[c] == ch)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	start;
	t_size	end;
	t_size	c;
	char	*res;

	c = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && is_in_set(s1[start], set))
	{
		start++;
	}
	while (end > start && is_in_set(s1[end - 1], set))
	{
		end--;
	}
	res = (char *)calloc((end - start + 1), sizeof(char));
	while (start < end)
	{
		res[c] = s1[start];
		c++;
		start++;
	}
	res[c] = '\0';
	return (res);
}
