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

FILES		= stackTests vectorTests mapTests

SRCS 		= $(addsuffix .cpp, $(FILES))
OBJS 		= $(addsuffix .o, $(FILES))
# OBJS			= ${addprefix ${OBJS_DIR}/, ${SRCS:.cpp=.o}}

OBJS_DIR	= objs

RM			= rm -rf

all: $(NAME)
	./$(NAME)

${OBJS_DIR}/%.o: %.cpp
	@mkdir -p ${OBJS_DIR}
	@${CXX} ${CXXFLAGS} $(MAIN) $(LIBGTEST) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Linking $(NAME)"
	@$(CXX) $(CXXFLAGS) $(MAIN) $(OBJS) $(LIBGTEST) -o $(NAME)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all