/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:50:07 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 19:58:40 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (str);
}

char	*ft_itoa(t_i32 n)
{
	t_i32	c;
	t_i32	is_neg;
	char	*str;

	c = 0;
	l = n;
	is_neg = l;
	str = (char *)ft_calloc(13, sizeof(char));
	if (!str)
		return (NULL);
	if (l < 0)
		str++ = '-'
		n = -n;
	while (n != 0)
	{
		str++ = (n % 10) + '0';
		n /= 10;
	}
	if (is_neg < 0)
		str[c++] = '-';
	str[c] = '\0';
	return (ft_strrev(str, c));
}
