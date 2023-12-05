# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sben-tay <sben-tay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 21:36:43 by sben-tay          #+#    #+#              #
#    Updated: 2023/12/05 12:35:07 by sben-tay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS            =   ft_printf.c ft_put.c \
					ft_strdup.c	ft_strlcpy.c ft_strlen.c 
					 
OBJS            = $(SRCS:.c=.o)

CC                = cc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror

NAME            = libftprintf.a

# GREEN = \033[32m
# GREY = \033[0;90m
# RED = \033[0;31m
# GOLD = \033[38;5;220m
# END = \033[0m

# header:
# 		@echo -e '\n\n'
# 		@echo -e '$(GOLD)            *******     *****  ******* $(END)'
# 		@echo -e '$(GOLD)          ******        ***    ******* $(END)'
# 		@echo -e '$(GOLD)      *******                 ******* $(END)'
# 		@echo -e '$(GOLD)     ******                 ******* $(END)'
# 		@echo -e '$(GOLD)  *******                 ******* $(END)'
# 		@echo -e '$(GOLD) ********************   *******      * $(END)'
# 		@echo -e '$(GOLD) ********************   *******    *** $(END)'
# 		@echo -e '$(GOLD)              *******   ******* ****** $(END)'
# 		@echo -e '$(GOLD)              ******* $(END)'
# 		@echo -e '$(GOLD)              ******* $(END)\n'
# 		@echo -e '$(GREY)                                      Made by sben-tay | PRINTF_PROJECT$(END)\n\n'

all:            $(NAME) 

$(NAME):        $(OBJS) 
				ar rcs $(NAME) $(OBJS)
%.o:%.c            
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				$(RM) $(OBJS) $(OBJS_BNS)

fclean:            clean
				$(RM) $(NAME)

re:             fclean $(NAME)


.PHONY:            all clean fclean re bonus