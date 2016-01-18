# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvignau <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/02 10:04:06 by kvignau           #+#    #+#              #
#    Updated: 2015/12/03 10:47:05 by kvignau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_lstmap.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstadd.c
SRC += ft_lstnew.c ft_strmapi.c ft_strmap.c ft_striteri.c ft_striter.c
SRC += ft_strequ.c ft_strnequ.c ft_strtrim.c ft_strjoin.c ft_nbwords.c
SRC += ft_strsplit.c ft_strsub.c ft_itoa.c ft_memcmp.c ft_strdel.c ft_strnew.c
SRC += ft_memdel.c ft_memalloc.c ft_strclr.c ft_putstr_fd.c ft_putendl_fd.c
SRC += ft_putendl.c ft_putnbr_fd.c ft_putchar_fd.c ft_strlcat.c ft_atoi.c
SRC += ft_strstr.c ft_strnstr.c ft_strrchr.c ft_bzero.c ft_isalnum.c
SRC += ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c
SRC += ft_toupper.c ft_strcmp.c ft_strncmp.c ft_bzero.c ft_memset.c ft_memchr.c
SRC += ft_memcpy.c ft_memccpy.c ft_memmove.c ft_putchar.c ft_putnbr.c
SRC += ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strchr.c
SRC += ft_strcat.c ft_strncat.c ft_strlen.c ft_nbrlen.c
SRCO = $(SRC:.c=.o)
HEADERS = .
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(SRCO)
	ar rc $@ $^
	ranlib $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

.PHONY: re clean fclean all
