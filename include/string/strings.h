#include<stdio.h>
#include<string.h>

int   maxOccuringChar              (char *str , int maxCount[]);
int   areRotations                 (char* str1, char *str2);
int   areAnagrams                  (char *src , char *dest);
char  firstNonRepeatingChar        (char *str);
int   isPalindrome                 (char *str);
int  *printDuplicates              (char *str , char duplicates[]);
char *removeDuplicates             (char *str , char newStr[]);
char *removeDuplicatesFrom2Strings (char* str1, char *str2);
void  reverseString                (char *str, int start, int end);
char *reverseStringWORecursion     (char *str);
void  reverseWords                 (char *str);
int   value                        (int v);
int   convert                      (char *str);
int   longestPalindrome            (char *str);
void  printPalindrome              (char *str, int start, int maxLength);
int   countWords                   (char *str);
int   stringToInteger              (char *str);
char *removeGivenCharacter         (char *str, char c);
void  permuteString                (char *str, int start, int end);
void  swap                         (char *i, char *j);
