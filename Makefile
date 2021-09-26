SERVER = server
CLIENT = client

# LIB
PATH_LIB = ./libft/
LIBFT = ./libft/libft.a

# Headers
HEADER = ./includes/minitalk.h
HEADER_INC = -I./includes/

# Sources
SRC_SERVER = $(shell ls ./ft_server/*.c)
SRC_CLIENT = $(shell ls ./ft_client/*.c)

# Objects
OBJ_SERVER = $(patsubst %.c, %.o, $(SRC_SERVER))
OBJ_CLIENT = $(patsubst %.c, %.o, $(SRC_CLIENT))

# Commands
CC	= gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $(HEADER_INC) $< -o $@

all: run_lib $(SERVER) $(CLIENT)

$(SERVER): $(OBJ_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) $(HEADER_INC) $(LIBFT) -o $(SERVER) $(OBJ_SERVER)

$(CLIENT):
	$(CC) $(CFLAGS) $(HEADER_INC) $(LIBFT) -o $(CLIENT) $(OBJ_CLIENT)

run_lib:
	make -C libft/

clean:
	$(RM) $(OBJ_SERVER) $(OBJ_CLIENT)
	make -C libft/ clean

fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re
