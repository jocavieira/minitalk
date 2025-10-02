# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocarlo2 <jocarlo2@sudent.42porto.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/26 19:31:39 by jocarlo2          #+#    #+#              #
#    Updated: 2025/08/27 17:16:38 by jocarlo2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
INC = -I ./inc -I ./libft/inc
LIBFT = ./libft/libft.a

SERVER_SRCS = server.c
CLIENT_SRCS = client.c
SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)
NAME_SERVER = server
NAME_CLIENT = client

SERVER_BONUS_SRCS = server_bonus.c
CLIENT_BONUS_SRCS = client_bonus.c
SERVER_BONUS_OBJS = $(SERVER_BONUS_SRCS:.c=.o)
CLIENT_BONUS_OBJS = $(CLIENT_BONUS_SRCS:.c=.o)
NAME_SERVER_BONUS = server_bonus
NAME_CLIENT_BONUS = client_bonus

# ----------------- RULES ----------------- #
all: $(LIBFT) $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME_SERVER): $(SERVER_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INC) $(SERVER_OBJS) $(LIBFT) -o $(NAME_SERVER)

$(NAME_CLIENT): $(CLIENT_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INC) $(CLIENT_OBJS) $(LIBFT) -o $(NAME_CLIENT)

bonus: $(LIBFT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)

$(NAME_SERVER_BONUS): $(SERVER_BONUS_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INC) $(SERVER_BONUS_OBJS) $(LIBFT) -o $(NAME_SERVER_BONUS)

$(NAME_CLIENT_BONUS): $(CLIENT_BONUS_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INC) $(CLIENT_BONUS_OBJS) $(LIBFT) -o $(NAME_CLIENT_BONUS)

clean:
	rm -f $(SERVER_OBJS) $(CLIENT_OBJS) $(SERVER_BONUS_OBJS) $(CLIENT_BONUS_OBJS)
	$(MAKE) clean -C ./libft

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_SERVER_BONUS) $(NAME_CLIENT_BONUS)
	$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re bonus