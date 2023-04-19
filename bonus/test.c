#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls;

	ls = (t_list *)malloc(sizeof(t_list));
	if (!ls)
		return (NULL);
	ls->content = content;
	ls->next = NULL;
	return (ls);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{

	if (lst)
	{
		new->next = *lst;
	}
	else 
	{
		new->next = NULL;
	}
	*lst = new;
}


int	main()
{	
	t_list	**ls;
	ls[0] = ft_lstnew("Hello world!");
	ft_lstadd_front(ls, ft_lstnew("First world!"));
	printf("Output -> %s, %s\n", (char *)ls[0]->content, (char *)ls[1]->content);
}
