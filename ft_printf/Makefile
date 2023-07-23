# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 16:40:59 by tdutel            #+#    #+#              #
#    Updated: 2022/11/29 10:37:01 by tdutel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC =	ft_printf.c		ft_function.c	ft_putfunction.c

OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER) Makefile
	$(CC) -I $(HEADER) $(CFLAGS) -o $@ -c $<

clean :
	rm -f $(OBJ) $(BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all
	

.PHONY: all clean fclean re
