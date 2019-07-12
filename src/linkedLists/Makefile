CC=gcc
OBJ=-c
DEBUG=-g -Werror -Wall
BIN=../../bin
INCLUDE=../../include

all: linkList.o
	$(CC) $(DEBUG) main.c $(BIN)/linkList.o -I$(INCLUDE) -o $(BIN)/linkList

linkList.o:
	$(CC) $(OBJ) linkList.c -o $(BIN)/linkList.o -I$(INCLUDE)

clean:
	rm -v ../../bin/linkList

run:
	../../bin/linkList
