#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <stdio.h>

//typedef bool	t_bool;

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

char	*ft_strdup(const char *str);
t_size	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, t_u32 n);
t_size	ft_strlcpy(char *dest, const char *src, t_size size);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, t_u32 n);
t_size	ft_strlcat(char *s1, const char *s2, t_size n);
void	*ft_calloc(t_size count, t_size size);
void	*ft_bzero(void *str, t_size n);

char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, t_u32 start, t_size len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char ch);

#endif
