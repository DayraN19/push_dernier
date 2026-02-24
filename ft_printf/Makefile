# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bastiangranier <bastiangranier@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 10:13:02 by bgranier          #+#    #+#              #
#    Updated: 2026/02/03 15:24:29 by bastiangran      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_printf_utils.c ft_print_hex.c ft_print_ptr.c
OBJ = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re