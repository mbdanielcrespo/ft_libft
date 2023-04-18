/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:53:02 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/18 19:35:36 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <strings.h>
# include <stdio.h>

typedef signed char		t_i8;
typedef unsigned char	t_u8;
typedef const unsigned char	ct_u8;
typedef signed int		t_i32;
typedef unsigned int	t_u32;

typedef size_t			t_size;

typedef struct s_list
{
	void		*content;
	struct s_list	*next;
}		t_list;

void	ft_bzero(void *str, t_size n);
void	*ft_calloc(t_size count, t_size size);
char	*ft_strdup(const char *str);
void	*ft_memset(void	*ptr, t_i32 ch, t_size n);
void	*ft_memcpy(void	*destptr, const void *srcptr, t_size n);
void	*ft_memchr(const void *s, t_i32 ch, t_size n);
void	*ft_memmove(void *destptr, const void *srcptr, t_size n);
t_u32	ft_memcmp(const void *str1, const void *str2, t_size n);
t_i32	ft_isdigit(t_i32 c);
t_i32	ft_isascii(t_i32 c);
t_i32	ft_isprint(t_i32 c);
t_i32	ft_isalpha(t_i32 c);
t_i32	ft_isalnum(t_i32 c);
t_i32	ft_toupper(t_i32 ch);
t_i32	ft_tolower(t_i32 ch);
t_size	ft_strlen(const char *str);
t_size	ft_strlcpy(char *dest, const char *src, t_size size);
t_size	ft_strlcat(char *s1, const char *s2, t_size n);
t_i32	ft_strncmp(const char *s1, const char *s2, t_size n);
char	*ft_strnstr(const char *big, const char *str, t_i32 n);
char	*ft_strchr(const char *str, t_u8 ch);
char	*ft_strrchr(const char *str, t_u8 ch);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_substr(const char *s, t_u32 start, t_size len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char ch);
t_i32	ft_atoi(const char *str);
char	*ft_itoa(t_i32 n);
char	*ft_strmapi(char const *s, char (*f)(t_u32, t_i8));
void	ft_striteri(char *s, void (*f)(t_u32, char*));
void	ft_putchar_fd(t_i8 c, t_i32 fd);
void	ft_putendl_fd(char *s, t_i32 fd);
void	ft_putnbr_fd(t_i32 n, t_i32 fd);
void	ft_putstr_fd(char *s, t_i32 fd);

#endif
