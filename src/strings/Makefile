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
	longestPalindrome.o \
	reverseString.o \
	reverseStringWithoutRecursion.o \
	reverseWords.o \
	romanToInteger.o \
	stringToInteger.o \
	areRotations.o \
	countWords.o \
	removeDuplicatesFrom2Strings.o \
	removeGivenCharacter.o \
	permuteString.o

all: createProject usage.o $(TARGET) strings

createProject: 
	mkdir -p $(BIN) 

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv $(INSTALL)

reverseString.o:
	$(CC) $(OBJFILE) -o $(BIN)/reverseString.o -I$(INCLUDE) \
	reverseString.c

reverseWords.o:
	$(CC) $(OBJFILE) -o $(BIN)/reverseWords.o -I$(INCLUDE) \
	reverseWords.c

countWords.o:
	$(CC) $(OBJFILE) -o $(BIN)/countWords.o -I$(INCLUDE) \
	countWords.c

reverseStringWithoutRecursion.o:
	$(CC) $(OBJFILE) -o $(BIN)/reverseStringWithoutRecursion.o \
	-I$(INCLUDE) reverseStringWithoutRecursion.c

stringToInteger.o:
	$(CC) $(OBJFILE) -o $(BIN)/printDuplicates.o -I$(INCLUDE) \
	stringToInteger.c

printDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/printDuplicates.o -I$(INCLUDE) \
	printDuplicates.c

removeDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/removeDuplicates.o -I$(INCLUDE) \
	removeDuplicates.c

removeDuplicatesFrom2Strings.o:
	$(CC) $(OBJFILE) -o $(BIN)/removeDuplicatesFrom2Strings.o -I$(INCLUDE) \
	removeDuplicatesFrom2Strings.c

removeGivenCharacter.o:
	$(CC) $(OBJFILE) -o $(BIN)/removeGivenCharacter.o -I$(INCLUDE) \
	removeGivenCharacter.c

areAnagrams.o:
	$(CC) $(OBJFILE) -o $(BIN)/areAnagrams.o -I$(INCLUDE) \
	areAnagrams.c

areRotations.o:
	$(CC) $(OBJFILE) -o $(BIN)/areRotations.o -I$(INCLUDE) \
	areRotations.c

maxOccuringChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/maxOccuringChar.o -I$(INCLUDE) \
	maxOccuringChar.c

isPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/isPalindrome.o -I$(INCLUDE)/strings \
	isPalindrome.c

longestPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/longestPalindrome.o -I$(INCLUDE) \
	longestPalindrome.c

firstNonRepeatingChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/firstNonRepeatingChar.o -I$(INCLUDE) \
	firstNonRepeatingChar.c

usage.o:
	$(CC) $(OBJFILE) -o $(BIN)/usage.o -I$(INCLUDE) \
	usage.c

romanToInteger.o:
	$(CC) $(OBJFILE) -o $(BIN)/romanToInteger.o -I$(INCLUDE) \
	romanToInteger.c

permuteString.o:
	$(CC) $(OBJFILE) -o $(BIN)/permuteString.o -I$(INCLUDE) \
	permuteString.c

strings:
	$(CC) $(CFLAG) strings.c -o $(BIN)/main -I$(INCLUDE) \
	$(BIN)/isPalindrome.o

run:
	$(BIN)/strings
