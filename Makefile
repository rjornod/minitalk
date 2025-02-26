SERVER = server
CLIENT = client
CFLAGS = -Wextra -Wall -Werror
SRC_CLIENT = sources/client.c 
SRC_SERVER = sources/server.c
OBJS_CLIENT = $(SRC_CLIENT:.c=.o)
OBJS_SERVER = $(SRC_SERVER:.c=.o)
INCLUDES = -Ilibft -Ift_printf
LIBFT = libft/libft.a
PRINTF = libft/ft_printf/libftprintf.a
CC = cc

all: $(CLIENT) $(SERVER)
$(SERVER): $(OBJS_SERVER) $(LIBFT) $(PRINTF)
		$(CC) $(FLAGS) -o $(SERVER) $(OBJS_SERVER) $(LIBFT) $(PRINTF)

$(CLIENT): $(OBJS_CLIENT) $(LIBFT) $(PRINTF)
		$(CC) $(FLAGS) -o $(CLIENT) $(OBJS_CLIENT) $(LIBFT) $(PRINTF)
%.o: %.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
$(LIBFT):
		make -C libft

$(PRINTF):
		make -C libft/ft_printf
		
clean: 	
	rm -f $(OBJS_CLIENT) $(OBJS_SERVER)
	make -C libft/ft_printf clean

fclean: clean
	rm -f $(SERVER)
	rm -f $(CLIENT)
	make -C libft/ft_printf fclean

re: fclean all

.PHONY: all clean fclean re
