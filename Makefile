CC=gcc
CXX=g++
CFLAG=-Wall -Werror -g
OBJFILE=-c
INCLUDE=include
BIN=bin
SRC=src

all: one thirteen fourteen fourteenB four seventeen eighteen two twenty five \
	eight nine anagram cprogWithoutMain maxOccuringChar printDuplicates \
	printUsage.o removeDuplicates reverseString reverseStringWithoutRecursion \
	reverseWords stringtoint trial nineteen three

clean:
	rm -v $(BIN)/*

one:
	$(CC) $(CFLAG) $(SRC)/1.c -o $(BIN)/1

thirteen:
	$(CC) $(CFLAG) $(SRC)/13.c -o $(BIN)/13

fourteen:
	$(CC) $(CFLAG) $(SRC)/14.c -o $(BIN)/14

fourteenB:
	$(CC) $(CFLAG) $(SRC)/14b.c -o $(BIN)/14b

seventeen:
	$(CC) $(CFLAG) $(SRC)/17.c -o $(BIN)/17

eighteen:
	$(CC) $(CFLAG) $(SRC)/18.c -o $(BIN)/18

two:
	$(CC) $(CFLAG) $(SRC)/2.c -o $(BIN)/2

twenty:
	$(CC) $(CFLAG) $(SRC)/20.c -o $(BIN)/20

four:
	$(CC) $(CFLAG) $(SRC)/4.c -o $(BIN)/4

five:
	$(CC) $(CFLAG) $(SRC)/5.c -o $(BIN)/5

eight:
	$(CC) $(CFLAG) $(SRC)/8.c -o $(BIN)/8

nine:
	$(CC) $(CFLAG) $(SRC)/9.c -o $(BIN)/9

anagram:
	$(CC) $(CFLAG) $(SRC)/anagram.c -o $(BIN)/anagram

cprogWithoutMain:
	$(CC) $(CFLAG) $(SRC)/cprogWithoutMain.c -o $(BIN)/cprogWithoutMain \
	-nostartfiles

maxOccuringChar:
	$(CC) $(CFLAG) $(SRC)/maxOccuringChar.c -o $(BIN)/maxOccuringChar

printDuplicates: printUsage.o
	$(CC) $(CFLAG) $(SRC)/printDuplicates.c $(BIN)/printUsage.o -o \
	$(BIN)/printDuplicates -I$(INCLUDE)

printUsage.o:
	$(CC) $(OBJFILE) $(SRC)/printUsage.c -o $(BIN)/printUsage.o -I$(INCLUDE)

removeDuplicates: printUsage.o
	$(CC) $(CFLAG) $(SRC)/removeDuplicates.c $(BIN)/printUsage.o -o \
	$(BIN)/removeDuplicatesa -I$(INCLUDE)

reverseString:
	$(CC) $(CFLAG) $(SRC)/reverseString.c -o $(BIN)/reverseString

reverseStringWithoutRecursion:
	$(CC) $(CFLAG) $(SRC)/reverseStringWithoutRecursion.c -o \
	$(BIN)/reverseStringWithoutRecursion

reverseWords:
	$(CC) $(CFLAG) $(SRC)/reverseWords.c -o $(BIN)/reverseWords

stringtoint:
	$(CC) $(CFLAG) $(SRC)/stringtoint.c -o $(BIN)/stringtoint

trial:
	$(CC) $(CFLAG) $(SRC)/trial.c -o $(BIN)/trial

nineteen:
	$(CXX) $(CFLAG) $(SRC)/19.cpp -o $(BIN)/19

three:
	$(CXX) $(CFLAG) $(SRC)/3.cpp -o $(BIN)/3
