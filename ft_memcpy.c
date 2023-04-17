/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:45:45 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/17 13:23:16 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, void *srcptr, t_size n)
{
	char	*dest;
	char	*src;
	t_size	c;

	c = 0;
	if (!destptr || !srcptr)
	{
		return (NULL);
	}
	dest = (char *)destptr;
	src = (char *)srcptr;
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
