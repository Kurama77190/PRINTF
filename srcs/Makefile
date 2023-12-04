# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 21:36:43 by sben-tay          #+#    #+#              #
#    Updated: 2023/12/04 14:51:32 by sben-tay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




NAME=libftprintf.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LIBFT = ./libft/ft_strdup.c ./libft/ft_strlcpy.c ./libft/ft_strlen.c
SRCS = ./srcs/ft_printf.c ./srcs/ft_put.c
OBJ = $(SRCS:.c=.o)
OBJLibft = $(LIBFT:.c=.o)

GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

header:
		@echo -e '\n\n'
		@echo -e '$(GOLD)            *******     *****  ******* $(END)'
		@echo -e '$(GOLD)          ******        ***    ******* $(END)'
		@echo -e '$(GOLD)      *******                 ******* $(END)'
		@echo -e '$(GOLD)     ******                 ******* $(END)'
		@echo -e '$(GOLD)  *******                 ******* $(END)'
		@echo -e '$(GOLD) ********************   *******      * $(END)'
		@echo -e '$(GOLD) ********************   *******    *** $(END)'
		@echo -e '$(GOLD)              *******   ******* ****** $(END)'
		@echo -e '$(GOLD)              ******* $(END)'
		@echo -e '$(GOLD)              ******* $(END)\n'
		@echo -e '$(GREY)                                      Made by sben-tay | PRINTF_PROJECT$(END)\n\n'

$(NAME): $(OBJ) $(OBJLibft)
		@echo -e '$(GREY) Compiling $(END)$(GOLD)$(NAME)$(END)'
		@ar rc $(NAME) $(OBJ) $(OBJLibft)
		@ranlib $(NAME)

%.o: %.c
		@echo -e '$(GREY) Compiling $(END)$(GREEN)$<$(END)'
		@$(CC) -I. -o $@ -c $? $(CFLAGS)

all: header $(NAME)
		@echo -e '\n$(GREY) Compilation $(GREEN)Done'

dev: all bonus clean

clean:
		@echo -e '$(GREY) Removing $(END)$(RED)Object$(END)'
		@$(RM) $(OBJ) $(OBJLibft)

fclean: clean
		@echo -e '$(GREY) Removing $(END)$(RED)Program$(END)'
		@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re dev header