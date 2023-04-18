#include "../libft.h"

static char	*ft_strrev(char	*str, t_size len)
{
	t_size	c;
	char	aux;

	c = 0;
	while (c < (len / 2))
	{
		aux = str[c];
		str[c] = str[len - 1 - c];
		str[len - 1 - c] = aux;
		c++;
	}
	printf("strrev -> %s\n", str);
	return (str);
}

char	*ft_itoa(t_i32 n)
{
	t_i32	c;
	t_i32	is_neg;
	char	*str;

	c = 0;
	is_neg = 0;
	str = (char *)ft_calloc(12, sizeof(char));
	if (!str) return (NULL);
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	while (n != 0)
	{
		str[c] = (n % 10) + '0';
		n /= 10;
		printf("char -> %c\n", str[c]);
		c++;
	}
	if (is_neg)
		str[c++] = '-';
	str[c] = '\0';
	return (ft_strrev(str, c));
}
/*
int	main()
{
	int	n = -2147483647;
	printf("Output -> %s", ft_itoa(n));
}
*/
