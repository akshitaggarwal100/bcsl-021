#include <stdio.h>
#include <string.h>

void main()
{
    char name[200];

    printf("Enter your name: ");
    scanf("%s", name);

    char *token = &name;
    char *sep = &name;

    

    // while (*sep)
    // {
    //     if (*token == ' ')
    //     {
    //         printf("one");
    //         printf("%c", *sep);
    //     }

    //     else if (*token == '\0')
    //     {
    //         printf("%d", token);
    //         printf("%c", *sep);
    //         sep = token;
    //     }
    //     token++;
    // }

    // while (*token || *token == ' ' || *token == '\0')
    // while (*sep)
    // {
    //     token++;
    //     printf("%c", *token);
    // }

    // while (*token)
    // {
    //     if (*token == ' ')
    //     {
    //         printf("%c", *sep);
    //         sep = token + 1;
    //     }

    //     else if (*token == '\0')
    //     {
    //         while (*sep)
    //         {
    //             printf("%c", *sep);
    //             sep++;
    //         }
    //     }
    //     token++;
    // }
}