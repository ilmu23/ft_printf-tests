# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:09:59 by ivalimak          #+#    #+#              #
#    Updated: 2023/11/03 20:55:02 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	../tester

CC		=	cc

INCLUDE	=	-I ../inc -I ../lib

PRINTF	=	../libftprintf.a

SRCS	=	test.c \
			c_test.c \
			d_test.c \
			u_test.c \
			s_test.c \
			x_test.c \
			p_test.c

all: $(NAME)

$(NAME): $(PRINTF) $(SRCS)
	@echo Compiling...
	@$(CC) -D BONUS=0 $(INCLUDE) $(SRCS) -L .. -L ../lib -lftprintf -lft -o $(NAME) 2> /dev/null

bonus: $(PRINTF) $(SRCS)
	@make -C .. bonus --no-print-directory
	@echo Compiling...
	@$(CC) -D BONUS=1 $(INCLUDE) $(SRCS) -L .. -L ../lib -lftprintf -lft -o $(NAME) 2> /dev/null

$(PRINTF):
	@make -C .. --no-print-directory

fclean:
	@rm -f $(NAME)

re: fclean all
