# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: craffate <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 15:11:17 by craffate          #+#    #+#              #
#    Updated: 2016/11/16 10:42:42 by craffate         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_isspace.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putendl_fd.c \
				ft_strmap.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strmapi.c \
				ft_putendl.c \
				ft_strjoin.c \
				ft_itoa.c \
				ft_strtrim.c \
				ft_absval.c \
				ft_factorial.c \
				ft_strsplit.c

OBJS		=	$(SRCS:.c=.o)

INCS		=	.

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS) -I$(INCS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS:srcs/%=%)
	rm -f $(INCS)/libft.gch

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
