# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sfeith <sfeith@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/01 10:45:20 by sfeith        #+#    #+#                  #
#    Updated: 2020/12/01 13:39:33 by sfeith        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC =		phonebook.cpp main.cpp

HDRS = 		Member_class.hpp

NAME =		phonebook

OBJ =		phonebook.o

CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ) $(HDRS)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\n>>>>>Finished making<<<<<"


%.o:	%.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf phonebook.o

fclean:		clean
	@rm -f $(NAME)

re:			fclean all


.PHONY:		all clean fclean re $(NAME)