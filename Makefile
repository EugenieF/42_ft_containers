# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 18:11:52 by efrancon          #+#    #+#              #
#    Updated: 2022/06/18 16:34:20 by efrancon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    		= ft_containers

SRCS_DIR		= .

SRCS			= main.cpp

OBJS_DIR		= ./objs

OBJS			= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

DEP				= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.d))

TEST_DIR		= my_tester

CXX				= c++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

RM				= rm -rf

INCLUDE			= containers

$(NAME):	$(OBJS)
		@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
		@echo "$(CUT)$(GREEN)✔ $(NAME) compiled$(RESET)"

-include $(DEP)
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
		@mkdir -p $(OBJS_DIR)
		@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@
		@echo "$(CUT)$(BLUE)$(CXX) $(CXXFLAGS) $(RESET)$(notdir $@)"
		@printf "$(UP)"

all:	$(NAME)

test_ft:
		@$(MAKE) ft -sC $(TEST_DIR)

test_std:
		@$(MAKE) std -sC $(TEST_DIR)

test_ft_valgrind:
		@$(MAKE) valgrind -sC $(TEST_DIR)

clean:
		@$(RM) $(OBJS_DIR)
		@make clean -sC $(TEST_DIR)
		@echo "$(CUT)[deleting objs]"
		@printf "$(UP)"

fclean:		clean
		@$(RM) $(NAME)
		@make fclean -sC $(TEST_DIR)
		@echo "$(CUT)[deleting $(NAME)]"

re:			fclean all

.PHONY:		all clean fclean re

RESET		= \033[0m
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
WHITE		= \033[1;37m
ORANGE		= \033[0;38;5;208m
UP			= \033[A
CUT			= \033[K
