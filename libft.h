#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <stdio.h>

typedef signed char		t_i8;
typedef unsigned char	t_u8;
typedef signed short		t_i16;
typedef unsigned short	t_u16;
typedef signed int		t_i32;
typedef unsigned int	t_u32;
typedef signed long long	t_i64;
typedef unsigned long long	t_u64;

typedef size_t	t_size;

typedef struct s_list
{
	void		*content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

void	*ft_bzero(void	*str, t_size n);
void	*ft_calloc(t_size count, t_size size);
char	*ft_strdup(const char *str);
void	*ft_memset(void	*ptr, t_i32 ch, t_size n);
void	*ft_memcpy(void	*destptr, void *srcptr, t_size n);
void	*ft_memmove(void *destptr, void *srcptr, t_size n);

t_u32	ft_isdigit(t_u8 c);
t_u32   ft_isascii(t_u8 c);
t_u32   ft_isprint(t_u8 c);
t_u32   ft_isalpha(t_u8 c);
t_u32   ft_isalnum(t_u8 c);

t_size	ft_strlen(const char *str);
t_size	ft_strlcpy(char *dest, const char *src, t_size size);
t_size	ft_strlcat(char *s1, const char *s2, t_size n);
char	*ft_strnstr(const char *big, const char *str, t_i32 n);
char	*ft_strchr(const char *str, t_u8 ch);

char	*ft_strrchr(const char *str, t_u8 ch);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, t_u32 start, t_size len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char ch);

char	*itoa(t_u32 n);

#endif
