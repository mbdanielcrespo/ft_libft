/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:03:51 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 17:44:46 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *str, t_i32 n)
{
	t_i32	c;
	t_i32	w;

	c = 0;
	w = 0;
	if (ft_strlen(str) == 0 || big == str)
		return ((char *)big);
	while (big[c] != '\0' && c < n)
	{
		while (big[c + w] == str[w] && (c + w) < n)
		{
			if (str[w + 1] == '\0')
			{
				return ((char *)&big[c]);
			}
			w++;
		}
		w = 0;
		c++;
	}
	return (NULL);
}
