/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:52:32 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/12 12:31:02 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, t_u8 ch)
{
	t_size	len;
	char	*last;

	last = NULL;
	len = ft_strlen(str) + 1;
	while (len != 0)
	{
		if (str[len] == ch)
		{
			last = (char *)&str[len];
			return (last);
		}
		len--;
	}
	return (last);
}
