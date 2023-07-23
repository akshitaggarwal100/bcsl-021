#include <stdio.h>

void main()
{
    int sum = 0, num;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %d", sum / 10);
}