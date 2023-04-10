#include "../../libft.h"
#include <stdio.h>

void	reset(char *s1, char *s2)
{
	// Function not very useful
	s1 = "Hello";
	s2 = "World!";
}

int	main(void)
{
	char	s1[255] = "Hello";
	char	s2[255] = "World!";

	reset(s1, s2);
	printf("Strdup output -> %s\n", ft_strdup("Hello world!"));
	printf("Strlen output -> %d\n", ft_strlen("Hello world!"));
	printf("Strings values ... s1 = %s s2 = %s\n", s1, s2);
	printf("Strcpy output -> %s\n", ft_strcpy(s1, s2));
	reset(s1, s2);
	printf("Strncpy output -> %s\n", ft_strncpy(s1, s2, 3));
	reset(s1, s2);
	printf("Strlcpy output -> %d\n", ft_strlcpy(s1, s2, 3));
	reset(s1, s2);
	printf("String values ... s1 = %s s2 = %s\n", s1, s2);
	printf("Strcat output -> %s\n", ft_strcat(s1, s2));
	reset(s1, s2);
	printf("Strncat output -> %s\n", ft_strncat(s1, s2, 3));
	reset(s1, s2);
	printf("Strlcat output -> %d\n", ft_strlcat(s1, s2, 3));
	reset(s1, s2);
}
