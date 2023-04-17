#include "../../libft.h"

void	*ft_bzero(void *str, t_size n)
{
	t_u8	*ptr;

	ptr = (t_u8 *)str;
	while (n > 0)
	{
		ptr[n] = 0;
		n--;	
	}
	return (ptr);
}
