# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngjch <youngjch@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 16:43:46 by youngjch          #+#    #+#              #
#    Updated: 2022/03/10 18:16:36 by youngjch         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Werror -Wall -Wextra
TARGET = program
OBJS = $@

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

.PHONY : clean

clean:
	rm -f $(OBJS) $(TARGET)

fclean:
	rm -f $(OBJS) $(TARGET)

re:
	$(clean) | $(all)
