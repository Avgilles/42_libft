CC=cc
CFLAGS=-Wall -Wextra -Werror -c -I ${HEADER_DIR}
SRCS = ./ft_isdigit.c \
        ./ft_isalpha.c \
        ./ft_isalnum.c \
        ./ft_strlen.c \
        ./ft_isprint.c \
        ./ft_memcpy.c \
        ./ft_memmove.c \
        ./ft_memset.c \
        ./ft_memcmp.c \
        ./ft_bzero.c \
        ./ft_calloc.c \
		./ft_strdup.c \
		./ft_atoi.c \
		./ft_strncmp.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strcat.c

OBJS = $(SRCS:.c=.o)
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