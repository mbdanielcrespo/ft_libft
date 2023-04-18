NAME = libft.a
PATH_SRC = ./
PATH_OBJ = ./
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
