# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pfile <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/23 18:02:55 by pfile             #+#    #+#              #
#    Updated: 2020/09/30 09:55:42 by pfile            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEST_N = libasm_test

NAME = libasm.a

CALL_LIB = -L. libasm.a

SRC =	ft_strlen.s \
	 	ft_strcpy.s \
	 	ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJ = $(SRC:.s=.o)

MAIN = main

HEADER = libasm.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
%.o: %.s
	nasm -f macho64 $<

main: $(MAIN).o
	gcc $(MAIN).c $(CALL_LIB) -o $(TEST_N)

clean:
	rm -f $(OBJ) $(MAIN).o

fclean: clean
	rm -f $(NAME) $(TEST_N)

re: fclean all

.PHONY: all clean fclean re
