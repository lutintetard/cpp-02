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
	$(COMP) $(FLAGS) $(C98) $< -c -o $@ -g

debug:
	echo $(COFILES)

clean:
	rm -rf $(COFILES)

fclean: clean
	rm -rf $(PROGRAM)

re: fclean all

.PHONY: all clean fclean re
