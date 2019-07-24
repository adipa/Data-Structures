CC=gcc
CXX=g++
CFLAG=-Wall -Werror -g
OBJFILE=-c
INSTALL=../..install
INCLUDE=../../include
BIN=../../bin
TARGET=maxOccuringChar.o \
       printDuplicates.o \
       removeDuplicates.o \
       areAnagrams.o \
       isPalindrome.o \
       firstNonRepeatingChar.o \
       usage.o


all: 
	main_printDuplicates.o main_removeDuplicates.o main_areAnagrams.o \
	main_isPalindrome.o main_firstNonRepeatingChar.o usage.o main

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv $(INSTALL)

printUsage.o:
	$(CC) $(OBJFILE) printUsage.c -o $(BIN)/printUsage.o -I$(INCLUDE)

reverseString:
	$(CC) $(CFLAG) reverseString.c -o $(BIN)/reverseString

reverseStringWithoutRecursion:
	$(CC) $(CFLAG) reverseStringWithoutRecursion.c -o \
	$(BIN)/reverseStringWithoutRecursion

reverseWords:
	$(CC) $(CFLAG) reverseWords.c -o $(BIN)/reverseWords

stringtoint:
	$(CC) $(CFLAG) stringtoint.c -o $(BIN)/stringtoint

main:
	$(CC) $(CFLAG) main.c -o $(BIN)/main -I$(INCLUDE) \
	$(BIN)/$(TARGET)

printDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_printDuplicates.o -I$(INCLUDE) \
	printDuplicates.c

removeDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_removeDuplicates.o -I$(INCLUDE) \
	removeDuplicates.c

areAnagrams.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_areAnagrams.o -I$(INCLUDE) \
	areAnagrams.c

maxOccuringChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_maxOccuringChar.o -I$(INCLUDE) \
	maxOccuringChar.c

isPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/isPalindrome.o -I$(INCLUDE) \
	isPalindrome.c

firstNonRepeatingChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/firstNonRepeatingChar.o -I$(INCLUDE) \
	firstNonRepeatingChar.c

usage.o:
	$(CC) $(OBJFILE) -o $(BIN)/usage.o -I$(INCLUDE) \
	usage.c
