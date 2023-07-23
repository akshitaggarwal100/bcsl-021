#include <stdio.h>
#include <string.h>

void main()
{
    char num[10];
    char new[10];
    printf("Enter a binary number: ");
    scanf("%s", num);

    new = strrev(num);
}