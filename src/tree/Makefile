CC=gcc
CFLAG=-Wall -Werror -g
OBJFILE=-c
SRC=src
BIN=bin
INCLUDE=include

all: createProject myStack tree main

createProject:
	mkdir $(BIN) $(INSTALL)

myStack.o:
	$(CC) $(OBJFILE) $(SRC)/myStack.c -o $(BIN)/myStack.o \
	-I$(INCLUDE)

tree.o:
	$(CC) $(OBJFILE) $(SRC)/tree.c -o $(BIN)/tree.o \
	-I$(INCLUDE)

main: myStack.o tree.o
	$(CC) $(CFLAG) $(SRC)/main.c -o $(BIN)/main \
	-I$(INCLUDE)

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv$(INSTALL)

run:
	$(BIN)/main
