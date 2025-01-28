NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

SRC =	ft_printf.c			\
		ft_putchar.c		\
		ft_putnbr_base.c	\
		ft_putstr.c			\
		ft_strlen.c			\

OBJECTS = $(SRC:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	@echo "Library $(NAME) created."

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@echo "Object files removed."

fclean: clean
	@rm -rf $(NAME)
	@echo "Library $(NAME) removed"
re: fclean all	