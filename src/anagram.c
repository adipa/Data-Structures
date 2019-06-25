//check if two strings are anagrams of each other
#include<stdio.h>

#define MAX_SIZE 20
#define ASCII_LENGTH 256

int areAnagrams(char *str1, char *str2);

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    scanf("%s%s", str1, str2);
    if(areAnagrams(str1, str2))
        printf("Anagram");
    else
        printf("Not an anagram");
    return 0;
}

int areAnagrams(char *str1, char *str2)
{
    int i, ascii_array[ASCII_LENGTH] = {0};
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        //increment the value at the character index by 1
      ascii_array[(int)str1[i]] += 1;
        //decrement the value at the character index by 1
      ascii_array[(int)str2[i]] -= 1;
    }
    //0 value at index indicates equal character count in both the strings
    for(i = 0; i < ASCII_LENGTH; i++) {
        if(ascii_array[i] != 0)
            return 0;
    }
    return 1;
}


