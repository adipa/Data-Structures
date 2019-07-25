#include "string.h"

long myAsciiToInt(char *str)
{
    long num = 0;
    int sign = 1, i = 0;
    if (str[i++] == '-')
        sign = -1;
    for (;str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - '0');
    }
    return sign * num;
}
