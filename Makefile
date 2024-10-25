# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 15:47:38 by julcalde          #+#    #+#              #
#    Updated: 2024/10/25 20:15:55 by julcalde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# This Makefile builds the libftprintf library using the libft library,
# It uses the 'ar' command to create the static library.
# It does not relink unnecessarily.

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I./libft

LIBFT_DIR = libft

LIBFT = $(LIBFT_DIR)/libft.a

SRCS = ft_printf.c ft_charcheck.c ft_numcheck.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_DIR)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS) $(LIBFT)

clean:
		rm -f $(OBJS)
		make -C $(LIBFT_DIR) clean

fclean: clean
		rm -f $(NAME)
		make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
