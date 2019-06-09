/*
 * Read more: http://www.java67.com/2018/04/21-string-programming-and-coding-interview-questions-answers.html#ixzz5po7Wj3BT
 * find the maximum occurring character in given String
 */

#include<stdio.h>
#include<string.h>

#define MAX_SIZE 20
#define ASCII_LENGTH 256
#define INT_MIN 0

int maxOccuringChar(char *str, int maxCount[]);

int main()
{
    int i = 0, size;
    char str[MAX_SIZE], c;
    int maxCount[ASCII_LENGTH] = {0};

    // I don't think so we need this at all.
    //printf("Enter String: ");

    /*
     * If you use scanf like this then you need to flush the input buffer.
     * which still has residual '\n'. If you do not flush the buffer then
     * the residual '\n' will resurface in next scanned variable if any.
     */
    scanf("%[^\n]s",str);
    scanf("%c",&c);

    // printf ("...", (char) maxchar(str)); would be more appropriate solution,
    // I guess.
    size = maxOccuringChar(str, maxCount); //character with max count
    for (i = 0; i <= size; i++)
        printf("Max. occuring char: %c\n",maxCount[i]);
    return 0;
}

int maxOccuringChar(char *str, int maxCount[])
{
    int i, j, ascii_array[ASCII_LENGTH] = {0};
    for (i = 0; str[i] != '\0'; i++) {
        //count occurrence of each character by its ASCII value
        ascii_array[str[i]] += 1
    }

    for (i = 1, j = 0; i < ASCII_LENGTH; i++) {

        //calculate ASCII value of character with max count
        if (ascii_array[i] > ascii_array[maxCount[j]] && i != 32)
        {
            j = 0;
            maxCount[j] = i;
        }
        // If any charater has same number of occurences as max occuring character
        if (ascii_array[i] == ascii_array[maxCount[j]])
        {
            if (i != maxCount[j])
                maxCount[++j] = i;
        }
    }
    return j;
}
