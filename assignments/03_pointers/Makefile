SRC = src
INC = inc
BIN = bin
CC  = gcc

LIBS     =
CFLAGS   = -Wall -O0 -g3
LDFLAGS  = -lc

PROJECT = main

PROJECT: 
	$(CC) $(CFLAGS) -I$(INC) $(LIBS) $(SRC)/$(PROJECT).c -o $(BIN)/$(PROJECT) $(LDFLAGS)

.PHONY: clean all

all: clean PROJECT

clean:
	rm $(BIN)/$(PROJECT)
