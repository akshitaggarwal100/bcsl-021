#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int chars = 0, spaces;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }

        else
        {
            chars++;
        }
    }

    printf("Characters: %d\n", chars);
    printf("Spaces: %d", spaces);
}