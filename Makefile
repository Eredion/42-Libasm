# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asegovia <asegovia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/02 15:57:26 by asegovia          #+#    #+#              #
#    Updated: 2020/07/07 09:23:46 by asegovia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_write.s ft_read.s ft_strdup.s
OBJ = $(SRC:.s=.o)
NAME = libasm.a
EXEC = test
NASM = nasm -f macho64

%.o: %.s
	$(NASM) $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)
	rm -f libasm.a

re:	fclean all

main: $(NAME)
	gcc -Wall -Wextra -Werror main.c -L. $(NAME) -o $(EXEC)
	./$(EXEC)

.PHONY: clean fclean re main
