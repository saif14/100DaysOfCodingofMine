#include <stdio.h>

int stringCompare(char *x, char *y)
{
    int flag = 0;
    while (*x || *y)
    {
        if (*x == *y)
        {
            x++;
            y++;
        }
        else if ((*x && !*y) ||
                 (!*x && *y) ||
                 (*x != *y))
        {
            if (*x < *y)
                flag = -1;
            else
                flag = 1;
            break;
        }
    }
    return flag;
}

void stringCopy(char *s1, char *s2)
{
    printf("s1: %c\n", *s1);
    while (*s1 != '\0')
    {
        printf("here i am");
        *s2 = *s1;
        printf("val %c\n", *s1);
        *s1++;
        *s2++;
    }
}

int main()
{
    int i, j, count;
    char *str[30], *temp;

    printf("how many strings do you need? :");
    scanf("%d", &count);

    printf("Enter the strings: \n");
    for (i = 0; i < count; i++)
    {

        printf("I: %d\n", i);
        str[i] = malloc(30);
        scanf("%s", str[i]);
    }

    // sorting the strings
    for (i = 1; i < count; i++)
    {
        char *curr_str = str[i];
        j = i - 1;
        while (j >= 0 && stringCompare(curr_str, str[j]) < 0)
        {
            temp = str[j];
            str[j + 1] = temp;
            j--;
        }
        str[j + 1] = curr_str;
    }

    for (i = 0; i < count; i++)
    {
        printf("%s\n", str[i]);
    }
}
