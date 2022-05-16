NAME = zombie
SRCS = ${shell find "." -name "*.cpp"}
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
CLANG = c++ -std=c++98
RM = rm -rf

%.o: %.cpp
	@$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)

${NAME}: $(OBJS)
		@${CLANG} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
		@${RM} ${OBJS}

fclean: clean
		@$(RM) ${NAME}

re: clean all

.PHONY:	clean fclean re bonus bench bclean
