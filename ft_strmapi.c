/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:47:51 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 15:11:27 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(t_u32, t_i8))
{
	t_u32	c;
	char	*str;

	c = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[c] != '\0')
	{
		str[c] = f(c, str[c]);
		c++;
	}
	return (str);
}
