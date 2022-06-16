SHELL		= /bin/sh

UNAME		= $(shell uname)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -std=c++11 

NAME		= gtests

INCLUDE		= -Igtest_incs/ -pthread -I$(CONTAINERS)

CONTAINERS	= ../containers

ifeq ($(UNAME), Darwin)
	LIBGTEST = gtest_incs/libgtest_mac.a
else
	LIBGTEST = gtest_incs/libgtest.a
endif

CXXFLAGS += $(INCLUDE)

MAIN		= $(SRCS_DIR)/gtest_main.cpp

FILES		=  ftVectorTest # stdVectorTest  # ftMapTest stdMapTest #  ftStackTest stdStackTest stdSetTest ftSetTest 


FILES_PATH	= $(addprefix $(SRCS_DIR)/, $(FILES))
SRCS 		= $(addsuffix .cpp, $(FILES_PATH))
OBJ 		= $(addsuffix .o, $(FILES))
OBJS 		= $(addprefix $(OBJS_DIR)/, $(OBJ))

OBJS_DIR	= objs
SRCS_DIR	= srcs

RM			= rm -rf

all: $(NAME)
ifeq ($(UNAME), Darwin)
	@./$(NAME)
else
#	@./$(NAME)
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt ./$(NAME)
endif

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS)  -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(YELLOW)Linking $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(OBJS) $(LIBGTEST) -o $(NAME)
	@echo "$(CUT)$(GREEN)✔ $(NAME) compiled$(RESET)"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(CUT)$(RED)[deleting $(RESET)$(notdir $@)]"
	@printf "$(UP)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CUT)$(RED)[deleting $(NAME)]$(RESET)"

re: fclean all

.PHONY:		all clean fclean re

RESET		= \033[0m
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
WHITE		= \033[1;37m
ORANGE		= \033[1;38;5;208m
UP			= \033[A
CUT			= \033[K