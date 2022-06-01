SHELL		= /bin/sh

UNAME		= $(shell uname)

CXX			= c++

CXXFLAGS	= -Wall -std=c++11 #-Wextra 

NAME		= gtests

INCLUDE		= -Igtest_incs/ -pthread -I$(CONTAINERS)

CONTAINERS	= ../containers

ifeq ($(UNAME), Darwin)
	LIBGTEST = gtest_incs/libgtest_mac.a
else
	LIBGTEST = gtest_incs/libgtest.a
endif

CXXFLAGS += $(INCLUDE)

MAIN		= gtest_main.cpp

FILES		=  stackTests # mapTests vectorTests

SRCS 		= $(addsuffix .cpp, $(FILES))
OBJS 		= $(addsuffix .o, $(FILES))
# OBJS			= ${addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o}}

OBJS_DIR	= objs

RM			= rm -rf

all: $(NAME)
ifeq ($(UNAME), Darwin)
	./$(NAME)
else
	valgrind ./$(NAME)
endif

$(NAME): $(OBJS)
	@echo "Linking $(NAME)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(OBJS) $(LIBGTEST) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all