#include <stdio.h>
#include <string.h>

void main()
{
    char str[30];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    int end = len - 1;
    int flag = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[end])
        {
            printf("It is not a palindrome");
            flag = 1;
            break;
        }
        end--;
    }

    if (flag == 0)
    {
        printf("It is a palindrome");
    }
}