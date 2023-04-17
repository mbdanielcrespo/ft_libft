/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:28:10 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/17 16:35:24 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_u32	ft_count(const char *s1, char ch)
{
	t_u32	c;
	t_u32	w;

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

static char	*ft_split2(const char *str, t_i32 start, t_i32 finish)
{
	char	*wrd;
	t_i32	c;

	c = 0;
	wrd = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!wrd)
	{
		return (NULL);
	}
	while (start < finish)
	{
		wrd[c] = str[start];
		c++;
		start++;
	}
	wrd[c] = '\0';
	return (wrd);
}

char	**ft_split(const char *s, char ch)
{
	t_size	c;
	t_size	w;
	t_u32	i;
	char	**strs;

	c = 0;
	w = 0;
	i = -1;
	strs = (char **)malloc((ft_count(s, ch) + 2) * sizeof(char *));
	if (!s || !strs)
		return (NULL);
	while (c <= ft_strlen(s))
	{
		if (s[c] != ch && i < 0)
			i = c;
		else if ((s[c] == ch || i == ft_strlen(s)) && i >= 0)
		{
			strs[w++] = ft_split2(s, i, c);
			i = -1;
		}
		c++;
	}
	strs[w] = NULL;
	return (strs);
}
