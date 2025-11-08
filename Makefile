CC=cc
CFLAGS=-Wall -Wextra -Werror -c -I ${HEADER_DIR}
SRCS = ./ft_isdigit.c ./ft_isalpha.c ./ft_isalnum.c ./ft_strlen.c ./ft_isprint.c
OBJS = ./ft_isdigit.o ./ft_isalpha.o ./ft_isalnum.o ./ft_strlen.o ./ft_isprint.c
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