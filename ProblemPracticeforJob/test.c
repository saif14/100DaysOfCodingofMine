#include<stdio.h>


// declaring recursive function
char* reverse(char* str);

void main()
{
    int i, j, k;
    char str[100];
    char *rev;
    printf("Enter the string:\t");
    scanf("%s", str);
    printf("The original string is: %s\n", str);
    rev = reverse(str);
    printf("The reversed string is: %s\n", rev);
    getch();
}

// defining the function
char* reverse(char *str)
{
    char *start = str;
    int len = 0;
    int startIdx = 0;
    while(*start !='\0')
    {
        start++;
        len++;
    }
    int endIdx = len;

     while (startIdx < endIdx)
    {
        str[startIdx] ^= str[endIdx];
        str[endIdx] ^= str[startIdx];
        str[startIdx] ^= str[endIdx];
        startIdx++;
        endIdx--;
    }
    return str;
}