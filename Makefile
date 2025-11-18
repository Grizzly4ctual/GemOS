# GemOS Makefile
CC=gcc
CFLAGS=-Wall -Wextra -g -pthread -Iinclude

SRC := $(shell find src -name "*.c")
OBJ=$(SRC:.c=.o)

all: gemos

gemos: $(OBJ)
	$(CC) $(CFLAGS) -o gemos $(OBJ) -lm

clean:
	rm -f $(OBJ) gemos
