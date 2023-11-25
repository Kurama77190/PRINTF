# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 21:36:43 by sben-tay          #+#    #+#              #
#    Updated: 2023/11/24 21:36:44 by sben-tay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




SRC = ft_putchar.c ft_printf.c ft_putnbr_base.c \
	ft_len_nb.c ft_pointeur.c 

OBJ = $(SRC:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re