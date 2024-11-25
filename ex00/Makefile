CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98
IFLAGS = $(addprefix -I,${INCLUDES})
DFLAGS = -MD
LFLAGS =

SRCS_DIR = srcs/
OBJS_DIR = .obj/
INCLUDES = .

SRCS = ScalarConverter.cpp \
	   check_type.cpp \
	   strtod.cpp \
	   display.cpp \
	   main.cpp

OBJS = ${SRCS:%.cpp=${OBJS_DIR}%.o}

DEPS = ${OBJS:.o=.d}

NAME = ex00

.PHONY: all clean fclean re

all: ${NAME}

-include ${DEPS}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${IFLAGS} ${DFLAGS} -o $@ $^ ${LFLAGS}

${OBJS_DIR}%.o: ${SRCS_DIR}%.cpp | ${OBJS_DIR}
	${CC} ${CFLAGS} ${IFLAGS} ${DFLAGS} -o $@ -c $<

${OBJS_DIR}:
	mkdir -p $(sort $(dir ${OBJS}))

clean:
ifneq ($(wildcard ${OBJS_DIR}),)
	rm -r ${OBJS_DIR}
endif

fclean: | clean
ifneq ($(wildcard ${NAME}),)
	rm ${NAME}
endif

re: | fclean
	@make --no-print-directory
