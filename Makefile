CC=cc
# CFLAGS=-Wall -Wextra -Werror -c -I ${HEADER_DIR}
SRCS = ./ft_isdigit.c \
        ./ft_isalpha.c \
        ./ft_isalnum.c \
        ./ft_strlen.c \
        ./ft_isprint.c \
		./ft_isascii.c \
        ./ft_memcpy.c \
        ./ft_memmove.c \
		./ft_memchr.c \
        ./ft_memset.c \
        ./ft_memcmp.c \
        ./ft_bzero.c \
        ./ft_calloc.c \
		./ft_strdup.c \
		./ft_atoi.c \
		./ft_strncmp.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strcat.c \
		./ft_strnstr.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strlcpy.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_split.c \
		./ft_itoa.c \
		./ft_strmapi.c \
		./ft_striteri.c

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

run: re
	cc main.c libft.a
	./a.out

.PHONY: all clean fclean re run