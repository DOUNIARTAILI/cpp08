# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/16 17:38:03 by drtaili           #+#    #+#              #
#    Updated: 2023/12/16 18:43:29 by drtaili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp 
OBJS = $(SRC:.cpp=.o)

NAME = MutantStack
HEADERS = MutantStack.hpp 
CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re