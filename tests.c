#include "libft.h"


int	main(void)
{
	char	s1[255] = "Hello";
	char	s2[255] = "World!";
	char    s3[255] = "Hello";

	printf("Strdup output -> %s\n", ft_strdup("Hello world!"));
	printf("Strlen output -> %zu\n", ft_strlen("Hello world!"));
	printf("\nStrings values ... s1 = %s s2 = %s\n", s1, s2);
	printf("Strlcpy output -> %zu\n", ft_strlcpy(s1, s2, 3));
	ft_strlcpy(s1, s3, 255);

	printf("\nString values ... s1 = %s s2 = %s\n", s1, s2);
	printf("Strlcat output -> %zu\n", ft_strlcat(s1, s2, 3));
	ft_strlcpy(s1, s3, 255);

	printf("\nString values ... s1 = %s ch = %c\n", s1, 'o');
	printf("Strchr output -> %s\n", ft_strchr(s1, 'o'));
	
	printf("\nString values ... s1 = %s ch = %c\n", s1, 'l');
        printf("Strrchr output -> %s\n", ft_strrchr(s1, 'l'));

	printf("\nString values ... s1 = %s ch = %s\n", s1, "el");
        printf("Strnstr output -> %s\n", ft_strnstr(s1, "el", 23));

	char    str[] = "Hello world!";
        char    strt[] = "abcHello World!abc";
        char    strt1[] = "abcabcabc";
        char    strt2[] = "bcdab";
        char    **res;
        t_u32   c;

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

