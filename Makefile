## Compiler

CC = gcc


## Variables

SRC = 	main.c ppm2Ascii.c

OBJDIR = obj

OBJ = $(SRC:%.c=$(OBJDIR)/%.o)

CFLAGS = -g -W -Wall -Wextra -Werror


NAME = ppm2Ascii

## Functions

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c ppm2Ascii.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)



clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm $(NAME)

## Rebuild
re: fclean all

.PHONY: all clean fclean re