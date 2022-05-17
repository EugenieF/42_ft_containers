SHELL		= /bin/sh

UNAME		= $(shell uname)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -std=c++11

NAME		= gtests

INCLUDE		= -Igtest_incs/ -pthread

ifeq ($(UNAME), Darwin)
	LIBGTEST = gtest_incs/libgtest_mac.a
else
	LIBGTEST = gtest_incs/libgtest.a
endif

CXXFLAGS += $(INCLUDE)

MAIN		= gtest_main.cpp

FILES		= stackTests #vectorTests mapTests

FILES_PATH	= $(addprefix $(SRCS_DIR)/, $(FILES))
SRCS 		= $(addsuffix .cpp, $(FILES_PATH))
OBJS 		= $(addsuffix .o, $(FILES_PATH))

OBJS_DIR	= objs
SRCS_DIR	= srcs

RM			= rm -rf

all: $(NAME)
	./$(NAME)


$(NAME): $(OBJS)
	@echo "Linking $(NAME)"
	# @mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) $(MAIN) $(OBJS) $(LIBGTEST) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all