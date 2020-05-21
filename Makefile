NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra
INCLUDES = -I$(HEADERS_DIRECTORY)

HEADERS_DIRECTORY = ./includes 
HEADERS	= ft_printf.h

SOURCES_DIRECTORY = ./sources
SOURCES = ft_printf.c

OBJECTS = $(SOURCES:.c=.o)

LIBFT = ./libft

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C $(LIBFT)/
	cp $(LIBFT)/libft.a ./$(NAME)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: $(SOURCES_DIRECTORY)/%.c
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT)/ clean
	rm -rf $(OBJECTS)

fclean: clean
	$(MAKE) -C $(LIBFT)/ fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re