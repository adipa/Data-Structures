CC=gcc
CXX=g++
CFLAG=-Wall -Werror -g
OBJFILE=-c
INSTALL=../..install
INCLUDE=../../include
BIN=../../bin/string
TARGET=maxOccuringChar.o \
	printDuplicates.o \
	rmDup.o \
	areAnagrams.o \
	isPalindrome.o \
	firstUniqueChar.o \
	longestPalindrome.o \
	revStr.o \
	revStrIterative.o \
	revWords.o \
	romanToInteger.o \
	stringToInteger.o \
	areRotations.o \
	countWords.o \
	rmDupFromTwoStr.o \
	rmChar.o \
	permuteString.o

all: createProject usage.o $(TARGET) strings

createProject: 
	mkdir -p $(BIN) 

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv $(INSTALL)

run:
	$(BIN)/strings

areAnagrams.o:
	$(CC) $(OBJFILE) -o $(BIN)/areAnagrams.o -I$(INCLUDE) \
	areAnagrams.c

areRotations.o:
	$(CC) $(OBJFILE) -o $(BIN)/areRotations.o -I$(INCLUDE) \
	areRotations.c

countWords.o:
	$(CC) $(OBJFILE) -o $(BIN)/countWords.o -I$(INCLUDE) \
	countWords.c

firstUniqueChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/firstUniqueChar.o -I$(INCLUDE) \
	firstUniqueChar.c

isPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/isPalindrome.o -I$(INCLUDE) \
	isPalindrome.c

longestPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/longestPalindrome.o -I$(INCLUDE) \
	longestPalindrome.c

maxOccuringChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/maxOccuringChar.o -I$(INCLUDE) \
	maxOccuringChar.c

permuteString.o:
	$(CC) $(OBJFILE) -o $(BIN)/permuteString.o -I$(INCLUDE) \
	permuteString.c

printDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/printDuplicates.o -I$(INCLUDE) \
	printDuplicates.c

revStr.o:
	$(CC) $(OBJFILE) -o $(BIN)/revStr.o -I$(INCLUDE) \
	revStr.c

revStrIterative.o:
	$(CC) $(OBJFILE) -o $(BIN)/revStrIterative.o -I$(INCLUDE) \
	revStrIterative.c

revWords.o:
	$(CC) $(OBJFILE) -o $(BIN)/revWords.o -I$(INCLUDE) \
	revWords.c

rmChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/rmChar.o -I$(INCLUDE) \
	rmChar.c

rmDup.o:
	$(CC) $(OBJFILE) -o $(BIN)/rmDup.o -I$(INCLUDE) \
	rmDup.c

rmDupFromTwoStr.o:
	$(CC) $(OBJFILE) -o $(BIN)/rmDupFromTwoStr.o -I$(INCLUDE) \
	rmDupFromTwoStr.c

romanToInteger.o:
	$(CC) $(OBJFILE) -o $(BIN)/romanToInteger.o -I$(INCLUDE) \
	romanToInteger.c

stringToInteger.o:
	$(CC) $(OBJFILE) -o $(BIN)/stringToInteger.o -I$(INCLUDE) \
	stringToInteger.c

usage.o:
	$(CC) $(OBJFILE) -o $(BIN)/usage.o -I$(INCLUDE) \
	usage.c

strings:
	$(CC) $(CFLAG) strings.c -o $(BIN)/strings -I$(INCLUDE) \
	$(BIN)/*.o
