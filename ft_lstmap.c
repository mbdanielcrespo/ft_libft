/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:13:48 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 14:05:46 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*new;
	t_list	*aux;

	a = NULL;
	if (lst && f)
	{
		aux = lst;
		h = ft_lstnew((f)(tmp->content));
		if (!h)
			return (NULL);
		tmp = tmp->next;
		while (tmp != NULL)
		{
			new = ft_lstnew((f)(aux->content));
			if (!new)
			{
				ft_lstclear(&, del);
				h = NULL;
				break ;
			}
			ft_lstadd_back(&h, new);
			aux = aux->next;
		}
	}
	return (a);
}
