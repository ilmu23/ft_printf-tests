# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 20:09:59 by ivalimak          #+#    #+#              #
#    Updated: 2025/05/12 16:01:19 by ivalimak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	../tester

CC		=	cc

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
	@$(CC) -g -D BONUS=0 -Wno-format $(INCLUDE) $(SRCS) -L .. -lftprintf -o $(NAME)

bonus: $(PRINTF) $(SRCS)
	@make -C .. bonus --no-print-directory
	@echo Compiling...
	@$(CC) -g -D BONUS=1 -Wno-format $(INCLUDE) $(SRCS) -L .. -lftprintf -o $(NAME)

$(PRINTF):
	@make -C .. --no-print-directory

fclean:
	@rm -f $(NAME)

re: fclean all
