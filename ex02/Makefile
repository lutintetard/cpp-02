# -*- Makefile -*-

COMP=c++
FLAGS=-Wall -Wextra -Werror
C98=-std=c++98
CPPFILES=Fixed.cpp\
		main.cpp
COFILES=$(CPPFILES:.cpp=.o)
PROGRAM=./a.out

all:$(PROGRAM)

$(PROGRAM): $(COFILES)
	$(COMP) $(FLAGS) $(C98) $(COFILES) -o $@ -g

%.o:%.cpp
	$(COMP) $(FLAGS) $(C98) $< -o -c $@ -g

clean:
	rm -rf $(COFILES)

fclean:
	rm -rf $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re
