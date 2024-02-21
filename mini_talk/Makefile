# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: merboyac <muheren2004@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 12:53:18 by merboyac          #+#    #+#              #
#    Updated: 2024/02/21 14:44:17 by merboyac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
CFILES	=	server.c client.c utils.c
OBJS = $(CFILES:.c=.o)

BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m

all: server client

$(NAME): $(OBJS)

server: server.c
	@echo "🚧 $(BOLD_YELLOW)Make: Starting the compilation..."
	$(CC) $(CFLAGS) -o server  server.c utils.c
	@echo "📟 $(BOLD_GREEN)server is ready to execute$(NO_COLOR)!"

client: client.c
	@echo "🚧 $(BOLD_YELLOW)Make: Starting the compilation..."
	$(CC) $(CFLAGS) -o client  client.c utils.c
	@echo "📟 $(BOLD_GREEN)client is ready to execute$(NO_COLOR)!"

clean:
	@rm -rf $(OBJS)
	@echo "🧼 $(BOLD_YELLOW)minitalk almost clean: $(NO_COLOR)Removed object files"

fclean: clean
	@rm -f client server
	@echo "🧼 $(BOLD_YELLOW)minitalk completely clean: $(NO_COLOR)Removed all!"

re: fclean all
