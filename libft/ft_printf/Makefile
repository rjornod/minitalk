# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 13:39:56 by enicolea          #+#    #+#              #
#    Updated: 2025/01/31 14:13:54 by rojornod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the output library
NAME = libftprintf.a

# Path to the libft library
LIBFT = ../libft.a

# Directory of the libft library
LIBFTDIR = ../

# Compiler to use
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Command to remove files
RM = rm -f

# Command to create an archive
AR = ar -rsc

# Source files
SOURCE = 	print_percent.c \
			ft_printf.c \
			print_pointer.c \
			print_char.c \
			print_str.c \
			print_digi.c \
			print_unint.c \
			print_hexlow.c \
			print_hexup.c 

# Object files
OBJECTS = $(SOURCE:%.c=%.o)

# Default target
all: $(NAME)

# Build the libft library
$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)
	
# Build the output library
$(NAME): $(LIBFT) $(OBJECTS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJECTS) $(LIBFT)

# Compile source files into object files
%.o:%.c 
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(LIBFTDIR)

# Clean object files
clean: 
	$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(OBJECTS)

# Clean object files and the output library
fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re