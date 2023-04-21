/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:13:48 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/20 14:34:56 by danalmei         ###   ########.fr       */
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
		a = ft_lstnew((f)(aux->content));
		if (!a)
			return (NULL);
		aux = aux->next;
		while (aux != NULL)
		{
			new = ft_lstnew((f)(aux->content));
			if (!new)
			{
				ft_lstclear(&a, del);
				a = NULL;
				break ;
			}
			ft_lstadd_back(&a, new);
			aux = aux->next;
		}
	}
	return (a);
}
