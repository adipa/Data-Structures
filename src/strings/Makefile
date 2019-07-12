CC=gcc
CXX=g++
CFLAG=-Wall -Werror -g
OBJFILE=-c
INSTALL=../..install
INCLUDE=../../include
BIN=../../bin

all: thirteen fourteen fourteenB four seventeen eighteen two twenty five \
	eight nine anagram cprogWithoutMain maxOccuringChar printDuplicates \
	printUsage.o removeDuplicates reverseString reverseStringWithoutRecursion \
	reverseWords stringtoint trial nineteen three main_maxOccuringChar.o \
	main_printDuplicates.o main_removeDuplicates.o main_areAnagrams.o \
	main_isPalindrome.o main_firstNonRepeatingChar.o usage.o main

clean:
	rm -rv $(BIN)

uninstall:
	rm -rv $(INSTALL)

thirteen:
	$(CC) $(CFLAG) 13.c -o $(BIN)/13

fourteen:
	$(CC) $(CFLAG) 14.c -o $(BIN)/14

fourteenB:
	$(CC) $(CFLAG) 14b.c -o $(BIN)/14b

seventeen:
	$(CC) $(CFLAG) 17.c -o $(BIN)/17

eighteen:
	$(CC) $(CFLAG) 18.c -o $(BIN)/18

two:
	$(CC) $(CFLAG) 2.c -o $(BIN)/2

twenty:
	$(CC) $(CFLAG) 20.c -o $(BIN)/20

four:
	$(CC) $(CFLAG) 4.c -o $(BIN)/4

five:
	$(CC) $(CFLAG) 5.c -o $(BIN)/5

eight:
	$(CC) $(CFLAG) 8.c -o $(BIN)/8

nine:
	$(CC) $(CFLAG) 9.c -o $(BIN)/9

anagram:
	$(CC) $(CFLAG) anagram.c -o $(BIN)/anagram

cprogWithoutMain:
	$(CC) $(CFLAG) cprogWithoutMain.c -o $(BIN)/cprogWithoutMain \
	-nostartfiles

maxOccuringChar:
	$(CC) $(CFLAG) maxOccuringChar.c -o $(BIN)/maxOccuringChar

printDuplicates: printUsage.o
	$(CC) $(CFLAG) printDuplicates.c $(BIN)/printUsage.o -o \
	$(BIN)/printDuplicates -I$(INCLUDE)

printUsage.o:
	$(CC) $(OBJFILE) printUsage.c -o $(BIN)/printUsage.o -I$(INCLUDE)

removeDuplicates: printUsage.o
	$(CC) $(CFLAG) removeDuplicates.c $(BIN)/printUsage.o -o \
	$(BIN)/removeDuplicatesa -I$(INCLUDE)

reverseString:
	$(CC) $(CFLAG) reverseString.c -o $(BIN)/reverseString

reverseStringWithoutRecursion:
	$(CC) $(CFLAG) reverseStringWithoutRecursion.c -o \
	$(BIN)/reverseStringWithoutRecursion

reverseWords:
	$(CC) $(CFLAG) reverseWords.c -o $(BIN)/reverseWords

stringtoint:
	$(CC) $(CFLAG) stringtoint.c -o $(BIN)/stringtoint

trial:
	$(CC) $(CFLAG) trial.c -o $(BIN)/trial

nineteen:
	$(CXX) $(CFLAG) 19.cpp -o $(BIN)/19

three:
	$(CXX) $(CFLAG) 3.cpp -o $(BIN)/3

main:
	$(CC) $(CFLAG) main.c -o $(BIN)/main -I$(INCLUDE) \
	$(BIN)/main_maxOccuringChar.o \
	$(BIN)/main_printDuplicates.o \
	$(BIN)/main_removeDuplicates.o \
	$(BIN)/main_areAnagrams.o \
	$(BIN)/main_isPalindrome.o \
	$(BIN)/main_firstNonRepeatingChar.o \
	$(BIN)/usage.o

main_printDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_printDuplicates.o -I$(INCLUDE) \
	main_printDuplicates.c

main_removeDuplicates.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_removeDuplicates.o -I$(INCLUDE) \
	main_removeDuplicates.c

main_areAnagrams.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_areAnagrams.o -I$(INCLUDE) \
	main_areAnagrams.c

main_maxOccuringChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_maxOccuringChar.o -I$(INCLUDE) \
	main_maxOccuringChar.c

main_isPalindrome.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_isPalindrome.o -I$(INCLUDE) \
	main_isPalindrome.c

main_firstNonRepeatingChar.o:
	$(CC) $(OBJFILE) -o $(BIN)/main_firstNonRepeatingChar.o -I$(INCLUDE) \
	main_firstNonRepeatingChar.c

usage.o:
	$(CC) $(OBJFILE) -o $(BIN)/usage.o -I$(INCLUDE) \
	usage.c
