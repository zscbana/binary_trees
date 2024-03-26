CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o) 
NAME = test
TOCLEAN = *~ 
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

fclean: oclean clean

oclean:
	$(RM) $(OBJ)

clean :
	$(RM)  $(TOCLEAN) $(NAME)
re: oclean all
