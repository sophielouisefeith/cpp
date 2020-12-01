# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sfeith <sfeith@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/17 16:02:30 by sfeith        #+#    #+#                  #
#    Updated: 2020/12/01 10:50:39 by sfeith        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC =		megaphone.cpp

NAME =		megaphone

OBJ =		megaphone.o

CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJ)
	clang++ $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "\n>>>>>Finished making<<<<<"


%.o:	%.cpp
	clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -rf megaphone.o

fclean:		clean
	@rm -f $(NAME)

re:			fclean all


.PHONY:		all clean fclean re $(NAME)



# .PHONY: all clean fclean re $(NAME)

# NAME = megaphone

# SRC = megaphone.cpp

# OBJ = $(SRC:.c=.o)

# CFLAGS = -Wall -Wextra -Werror



# all: $(NAME)

# $(NAME): $(OBJ) 
# 	clang++ $(CFLAGS) -o $(NAME)$(OBJ)
# 	#@echo "\n>>>>>Finished making<<<<<"


# %.o: %.cpp
# 	clang++ $(CFLAGS) -c $< -o $@

# clean:
# 	@$(RM) -rf $(OBJ)
# 	#@make clean -C 

# fclean: clean
# 	@$(RM) -f $(NAME)
# 	#@make fclean -C 

# re: fclean all

