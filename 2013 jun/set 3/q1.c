#include <stdio.h>

void main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %d row of A: ", i+1);
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %d row of B: ", i+1);
        scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    
}