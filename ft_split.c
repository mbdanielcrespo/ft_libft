/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:23:59 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/19 17:59:10 by danalmei         ###   ########.fr       */
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
		if (s[c] == ch)
		{
			w++;
		}
		c++;
	}
	return (w + 1);
}

static char	*ft_wordup(const char *s, t_i32 start, t_i32 finish)
{
	t_i32	c;
	t_i32	len;
	char	*str;

	c = 0;
	len = finish - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while ((start + c) < finish)
	{
		str[c] = s[c + start];
		c++;
	}
	str[c] = '\0';
	return (str);
}

char	**ft_split(char const *s, char ch)
{
	t_i32	w;
	t_i32	start;
	t_i32	finish;
	char	**strs;

	w = 0;
	start = 0;
	finish = 0;
	if (!s)
		return (NULL);
	strs = (char **)malloc((ft_count_words(s, ch) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (w < ft_count_words(s, ch))
	{
		while (s[finish] != ch)
			finish++;
		strs[w] = ft_wordup(s, start, finish);
		if (!strs[w])
			while ()
			return (NULL);
		w++;
		start = finish++;
	}
	strs[w] = NULL;
	return (strs);
}

int	main()
{
	t_i32	c;
	char	**strs;
	
	c = 0;
	strs = ft_split("\0aa\0bbb", '\0');
	printf("Input str -> Hello world! Bye world!, del -> \' \'\n");
	while (strs[c] != NULL)
	{
		printf("Spit str -> %s\n", strs[c]);
		c++;
	}
	return (0);
}
