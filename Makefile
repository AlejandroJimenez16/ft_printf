NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c			\
		ft_putchar.c		\
		ft_putnbr_base.c	\
		ft_putstr.c			\
		ft_strlen.c			\

OBEJCTS = $(SRC:.c=.o)

$(NAME): $(OBEJCTS)
	ar rcs $(NAME) $(OBEJCTS)
	@echo "Library $(NAME) created."

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS) $(OBJECTS_BONUS)
	@echo "Object files removed."

fclean: clean
	@rm -rf $(NAME)
	@echo "Library $(NAME) removed"

re: fclean all
		