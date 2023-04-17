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
