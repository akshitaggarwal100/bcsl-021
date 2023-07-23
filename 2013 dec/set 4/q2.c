#include <stdio.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = 0;
    char *i = &str[0];

    while (*i != '\0')
    {
        i++;
        len++;
    }

    printf("Length: %d", len);

}