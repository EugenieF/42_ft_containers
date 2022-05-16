SHELL		= /bin/sh

UNAME		=	$(shell uname)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -std=c++11

NAME		= gtests

INCLUDE		= -Igtest_incs/ -pthread

ifeq ($(UNAME), Darwin)
	CXXFLAGS += 
	LIBGTEST = gtest_incs/libgtest_mac.a
else
	LIBGTEST = gtest_incs/libgtest.a
endif

CXXFLAGS += $(INCLUDE)

MAIN		= gtest_main.cpp

FILES		=  stackTests vectorTests mapTests

FT_CONTAINER_OBJS_PATH = ../../objs/

FT_CONTAINER_DIR = 

FT_CONTAINER_PATH = $(addprefix $(FT_CONTAINER_OBJS_PATH), $(FT_CONTAINER_DIR))
# FT_CONTAINER_OBJS = $(wildcard $(foreach $(FT_CONTAINER_PATH)/*.o) #taking all the objects without the main
FT_CONTAINER_OBJS = $(foreach dir, $(FT_CONTAINER_PATH) ,$(wildcard $(dir)/*.o))

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

FT_CONTAINER_GOOD = $(filter-out $(FT_CONTAINER_PATH), $(FT_CONTAINER_OBJS))
all: $(NAME)
	./$(NAME)

$(NAME): $(OBJS)
	@# echo $(FT_CONTAINER_OBJS)
	@# echo $(FT_CONTAINER_GOOD)
	@echo "Linking $(NAME)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(FT_CONTAINER_GOOD) $(OBJS) $(LIBGTEST) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
