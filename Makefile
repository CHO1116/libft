# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:43:46 by youngjch          #+#    #+#              #
#    Updated: 2022/03/11 14:05:30 by youngjch         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_A = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_A = $(SRC_A : .c = .o)
OBJS_B = $(SRC_B : .c = .o)

AR = ar -rcs
RM = rm -f
CC = gcc
CFLAGS = -Werror -Wall -Wextra

ifdef BONUS
	OBJS = $(OBJS_A) $(OBJS_B)
else
	OBJS = $(OBJS_A)
endif

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

bonus :
	make BONUS = 1 all

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re:	fclean all

.PHONY : all bonus clean fclean re