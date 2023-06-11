NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
INC_DIR = ./includes/
OBJS = $(SRCS:%.c=%.o)
AR = ar rc
RM = rm -f
LIB = ranlib

.PHONY: all clean fclean re

all: $(NAME)

$(SRCS/%.o): $(SRCS/%.c)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all