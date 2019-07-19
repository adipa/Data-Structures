CC=gcc
CFLAG=-Wall -Werror -g
OBJFILE=-c -g
SRC=src
BIN=bin
INCLUDE=include

all: createProject myStack.o tree.o main

createProject:
	mkdir -p $(BIN) $(INSTALL)

myStack.o:
	$(CC) $(OBJFILE) $(SRC)/myStack.c -o $(BIN)/myStack.o \
	-I$(INCLUDE)

tree.o:
	$(CC) $(OBJFILE) $(SRC)/tree.c -o $(BIN)/tree.o \
	-I$(INCLUDE)

main: myStack.o tree.o
	$(CC) $(CFLAG) $(SRC)/main.c $(BIN)/tree.o $(BIN)/myStack.o -o $(BIN)/main \
	-I$(INCLUDE)

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv$(INSTALL)

run:
	$(BIN)/main
