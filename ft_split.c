/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:23:59 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/21 20:28:09 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_i32	ft_count_words(char const *s, char ch)
{
	t_i32	c;
	t_i32	w;

	c = 0;
	w = 0;
	while (s[c] != '\0')
	{
		while (s[c] == ch)
			c++;
		if (s[c] != '\0')
			w++;
		while (s[c] != ch && s[c])
			c++;
	}
	return (w);
}

char	*ft_wrdup(char const *s, char ch, char **strs)
{
	t_i32	c;
	char	*str;

	c = 0;
	while (s[c] != ch && s[c] != '\0')
		c++;
	str = (char *)malloc((c + 1) * sizeof(char));
	if (!str)
		return (NULL);
	c = 0;
	while (s[c] != ch && s[c] != '\0')
	{
		str[c] = s[c];
		c++;
	}
	str[c] = '\0';
	*strs = str;
	return ((char *)s + c);
}

char	**ft_split(char const *s, char ch)
{
	char	**strz;
	char	**strs;
	
	strs = (char **)malloc((ft_count_words(s, ch) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strz = strs;
	while (*s != '\0')
	{
		if (*s != '\0' && *s != ch)
                        s = ft_wrdup(s, ch, strs++);
		while (*s == ch)
			s++;		
	}
	strs = NULL;
	return (strz);
}

int	main()
{
	t_i32	c;
	char	**strs;
	
	c = 0;

	strs = ft_split("\0aa\0bbb", '\0');
	printf("Input str -> \\0aa\\0bbb");
	while (strs[c] != NULL)
	{
		printf("Spit str -> %s\n", strs[c]);
		c++;
	}
	strs = ft_split("      split       this for   me  !       ", ' ');
        printf("Input str ->       split       this for   me  !       , del -> \' \'\n");
        while (strs[c] != NULL)
        {
                printf("Spit str -> %s\n", strs[c]);
                c++;
        }

        return (0);
}

