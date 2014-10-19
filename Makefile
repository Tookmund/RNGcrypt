CC=gcc
FLAGS= -Wall -Werror
FILES= RNGcrypt.c
NAME= RNGcrypt

RNGcrypt: $(FILES)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)
