# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iait-ouf <iait-ouf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 19:56:33 by iait-ouf          #+#    #+#              #
#    Updated: 2023/03/02 20:03:00 by iait-ouf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I $(INCLUDE)

LIBNAME = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_swap.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strlen.c \
	   srcs/ft_strcmp.c

INCLUDE = includes

OBJECTS = $(SRCS:.c=.o)

all: $(LIBNAME)

$(LIBNAME): $(OBJECTS)
	ar -rc $(LIBNAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re