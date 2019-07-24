CC=gcc
OBJ=-c
DEBUG=-g -Werror -Wall
BIN=../../bin
INCLUDE=../../include/linklist

all: createProject linkList.o
	$(CC) $(DEBUG) main.c $(BIN)/linkList.o -I$(INCLUDE) -o $(BIN)/linkList

createProject:
	mkdir -p $(BIN)

linkList.o:
	$(CC) $(OBJ) linkList.c -o $(BIN)/linkList.o -I$(INCLUDE)

clean:
	rm -v ../../bin/linkList

run:
	../../bin/linkList
