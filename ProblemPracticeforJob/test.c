#include<stdio.h>
#include <string.h>
#include <stdlib.h>


void  reverseString(char *str)
{
    int startIdx = 0;
    int endIdx = strlen(str)-1;

    while (startIdx < endIdx)
    {
        str[startIdx] ^= str[endIdx];
        str[endIdx] ^= str[startIdx];
        str[startIdx] ^= str[endIdx];
        startIdx++;
        endIdx--;
    }

}


void main()
{

    char str[] = "ABCD";
    reverseString(str);

    if(!strcmp(str, "DCBA"))
    {
        printf("Hello World!");
    }
}

