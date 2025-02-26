# List of source files
SOURCES = ft_split.c ft_striteri.c ft_strmapi.c ft_putnbr_fd.c ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

# Name of the output library
NAME = libft.a

# Compiler to use
CC = cc

# List of object files derived from source files
OBJECTS = $(SOURCES:.c=.o)

# Default target to build the library
all: $(NAME)

# Rule to create the library from object files
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# Rule to remove object files
clean:
	rm -f $(OBJECTS)

# Rule to remove object files and the library
fclean: clean
	rm -f $(NAME)

# Rule to clean and rebuild everything
re: fclean all

# Declare these targets as not files
.PHONY: all clean fclean re
