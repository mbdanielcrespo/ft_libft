/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:11:58 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 18:00:22 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_u32	ft_memcmp(const void *str1, const void *str2, t_size n)
{
	t_size	c;
	ct_u8	*s1;
	ct_u8	*s2;

	c = 0;
	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	while (c < n)
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
