CC=cc
CFLAGS=-Wall -Wextra -Werror -c -I ${HEADER_DIR}
SRCS = ./ft_isdigit.c ./ft_isalpha.c ./ft_isalnum.c ./ft_strlen.c ./ft_isprint.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_memcmp.c ./ft_bzero.c ./ft_calloc.c
OBJS = ./ft_isdigit.o ./ft_isalpha.o ./ft_isalnum.o ./ft_strlen.o ./ft_isprint.o ./ft_memcpy.o ./ft_memmove.o ./ft_memset.o ./ft_memcmp.o ./ft_bzero.o ./ft_calloc.o
NAME=libft.a

all: $(NAME)

$(NAME):$(OBJS)
	ar -rcs $@ $^
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re