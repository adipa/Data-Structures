//check if two strings are anagrams of each other
#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20
#define ASCII_LENGTH 256

int anagram(char *str1, char *str2);
void count(char *str, int ascii_array[]);

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    scanf("%s%s", str1, str2);
    if(anagram(str1, str2))
        printf("Anagram");
    else
        printf("Not an anagram");
}

int anagram(char *str1, char *str2)
{
    int i, ascii_array1[ASCII_LENGTH] = {0}, ascii_array2[ASCII_LENGTH] = {0};
    //size has to be same for strings to be anagrams
    if(strlen(str1) != strlen(str2))
        return 0;
    //count occurrences of each character in both the strings
    count(str1, ascii_array1);
    count(str2, ascii_array2);
    //strings are anagrams of each other only if count of all the character match
    for(i = 0; i < ASCII_LENGTH; i++){
        if(ascii_array1[i] != ascii_array2[i])
            return 0;
    }
    return 1;
}

void count(char *str, int ascii_array[])
{
    int i = 0;
    while(str[i] != '\0')
        ascii_array[str[i++]] += 1;
}
