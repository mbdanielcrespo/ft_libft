NAME = libft.a
PATH_SRC = ./
PATH_OBJ = ./

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./includes/
all: $(NAME)
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

SRC = 	$(PATH_SRC)ft_atoi.c\
		$(PATH_SRC)ft_bzero.c\
		$(PATH_SRC)ft_calloc.c\
		$(PATH_SRC)ft_isalpha.c\
		$(PATH_SRC)ft_isascii.c\
		$(PATH_SRC)ft_isdigit.c\
		$(PATH_SRC)ft_isprint.c\
		$(PATH_SRC)ft_memcpy.c\
		$(PATH_SRC)ft_memset.c\
		$(PATH_SRC)ft_strchr.c\
		$(PATH_SRC)ft_strdup.c\
		$(PATH_SRC)ft_strlcat.c\
		$(PATH_SRC)ft_strlcpy.c\
		$(PATH_SRC)ft_strlen.c\
		$(PATH_SRC)ft_strnstr.c\
		$(PATH_SRC)ft_strrchr.c\
		$(PATH_SRC)ft_tolower.c\
		$(PATH_SRC)ft_toupper.c\
		$(PATH_SRC)ft_memmove.c\
		$(PATH_SRC)ft_memchr.c\
		$(PATH_SRC)ft_memcmp.c\
		$(PATH_SRC)ft_isalnum.c

OBJ = $(patsubst %.c,%.o,$(SRC))



$(NAME): $(OBJ)
#	$(CC) -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
