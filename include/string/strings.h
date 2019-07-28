#ifndef STRINGS_H
#define STRINGS_H

#include<stdio.h>
#include<string.h>

#define ASCII_LENGTH 256
#define TRUE 1
#define FALSE 0

int   areAnagrams           (char *fstStr, char *sndStr);
int   areRotations          (char *fstStr, char *sndStr);
int   countWords            (char *str);
int   isPalindrome          (char *str);
int   longestPalindrome     (char *str);
int   maxOccuringChar       (char *str , int maxCount[]);
int   printDuplicates       (char *str , int duplicates[]);
int   RToIvalue             (int value);
int   RToIconvert           (char *str);
int   stringToInteger       (char *str);
char  firstUniqueChar       (char *str);
void  permuteString         (char *str, int start, int end);
void  printPalindrome       (char *str, int start, int maxLength);
void  swap                  (char *i, char *j);
void  revStr                (char *str, int start, int end);
void  revWords              (char *str);
char *revStrIterative       (char *str);
char *rmChar                (char *str, char c);
char *rmDup                 (char *str , char newStr[]);
char *rmDupFromTwoStr       (char *fstStr, char *sndStr);

#endif
