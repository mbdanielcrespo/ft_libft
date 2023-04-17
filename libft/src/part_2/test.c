#include "../../libft.h"

int	main()
{
	char	str[] = "Hello world!";
	char	strt[] = "abcHello World!abc";
	char	strt1[] = "abcabcabc";
	char	strt2[] = "bcdab";
	char	**res;
	t_u32	c;

	printf("ft_bzero output -> %p\n", ft_bzero(str, 3));
	printf("ft_alloc output -> %p\n", ft_calloc(5, sizeof(char)));
	printf("ft_strtrim output -> %s\n", ft_strtrim(strt, "abc"));
	printf("ft_strtrim output -> %s\n", ft_strtrim(strt1, "abc"));
	printf("ft_strtrim output -> %s\n", ft_strtrim(strt2, "abc"));
	
	c = 0;
	res = ft_split("Hello world! how are you feling today?", ' ');
	printf("ft_split input str -> Hello world! how are you feling today?, delimiter -> \" \"\n");
	while (res[c] != NULL)
	{
		printf("str -> %s\n", res[c]);
		free(res[c]);
		c++;
	}
}
