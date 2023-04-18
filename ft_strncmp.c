/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:55:43 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 17:34:25 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_i32	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size	c;

	c = 0;
	while (s1[c] != '\0' && s1[c] == s2[c] && c < (n - 1))
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
