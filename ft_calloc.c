/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:23:59 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/12 13:26:37 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(t_size count, t_size size)
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(count * size));
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count);
	return (ptr);
}