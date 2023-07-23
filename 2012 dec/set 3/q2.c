#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int arr[10], i;

    for (i = 0; num > 0; ++i)
    {
        arr[i] = num % 2;
        num /= 2;
    }

    for (i = i - 1; i > -1; i--)
    {
        printf("%d", arr[i]);
    }
}