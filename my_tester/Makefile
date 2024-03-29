SHELL			= /bin/sh

UNAME			= $(shell uname)

CXX				= c++

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 $(INCLUDE)

FT_NAME			= ft_containers_gtests
STD_NAME		= std_containers_gtests

INCLUDE			= -Igtest_incs/ -pthread -I$(CONTAINERS)

CONTAINERS		= ../containers

VALGRIND_FILE	= valgrind-out.txt

ifeq ($(UNAME), Darwin)
	LIBGTEST 	= gtest_incs/libgtest_mac.a
else
	LIBGTEST 	= gtest_incs/libgtest.a
endif
CXXFLAGS		+= -std=c++11 -Wno-deprecated-copy

MAIN			= $(SRCS_DIR)/gtest_main.cpp

FT_FILES		= ftStackTest ftVectorTest ftMapTest ftSetTest

STD_FILES		= stdStackTest stdVectorTest stdMapTest stdSetTest

FT_FILES_PATH	= $(addprefix $(SRCS_DIR)/, $(FT_FILES))
FT_SRCS 		= $(addsuffix .cpp, $(FT_FILES_PATH))
FT_OBJ 			= $(addsuffix .o, $(FT_FILES))
FT_OBJS 		= $(addprefix $(OBJS_DIR)/, $(FT_OBJ))

STD_FILES_PATH	= $(addprefix $(SRCS_DIR)/, $(STD_FILES))
STD_SRCS 		= $(addsuffix .cpp, $(STD_FILES_PATH))
STD_OBJ 		= $(addsuffix .o, $(STD_FILES))
STD_OBJS 		= $(addprefix $(OBJS_DIR)/, $(STD_OBJ))

DEP				= $(addprefix $(OBJS_DIR)/, $(FT_SRCS:.cpp=.d))
DEP				+= $(addprefix $(OBJS_DIR)/, $(STD_SRCS:.cpp=.d))

OBJS_DIR		= objs
SRCS_DIR		= srcs

RM				= rm -rf

all: $(FT_NAME) $(STD_NAME)

-include $(DEP)
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

$(FT_NAME): $(FT_OBJS)
	@echo "$(YELLOW)🚧 Linking $(FT_NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(FT_OBJS) $(LIBGTEST) -o $(FT_NAME)
	@echo "$(CUT)$(GREEN)✔ $(FT_NAME) compiled$(RESET)"

$(STD_NAME): $(STD_OBJS)
	@echo "$(YELLOW)🚧 Linking $(STD_NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(STD_OBJS) $(LIBGTEST) -o $(STD_NAME)
	@echo "$(CUT)$(GREEN)✔ $(STD_NAME) compiled$(RESET)"

ft:		$(FT_NAME)
	@echo "$(CUT)$(BLUE)→ execute $(FT_NAME) :$(RESET)"
	@./$(FT_NAME)

std:	$(STD_NAME)
	@echo "$(CUT)$(BLUE)→ execute $(STD_NAME) :$(RESET)"
	@./$(STD_NAME)

valgrind: $(FT_NAME)
	@echo "$(CUT)$(BLUE)→ execute $(FT_NAME) with valgrind :$(RESET)"
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=$(VALGRIND_FILE) ./$(FT_NAME)
	@cat $(VALGRIND_FILE)

clean:
	@$(RM) $(OBJS_DIR)
	@$(RM) $(VALGRIND_FILE) 
	@echo "$(CUT)$(RED)[deleting gtests objs]$(RESET)"

fclean: clean
	@$(RM) $(FT_NAME) $(STD_NAME)
	@echo "$(CUT)$(RED)[deleting $(FT_NAME)]$(RESET)"
	@echo "$(CUT)$(RED)[deleting $(STD_NAME)]$(RESET)"

re: fclean all

.PHONY:		all clean fclean re

RESET		= \033[0m
RED			= \033[0;31m
GREEN		= \033[1;32m
YELLOW		= \033[0;33m
BLUE		= \033[1;34m
WHITE		= \033[0;37m
ORANGE		= \033[0;38;5;208m
UP			= \033[A
CUT			= \033[K