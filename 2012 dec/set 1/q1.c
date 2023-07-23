#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int numDup = num;

    int temp;

    while (numDup != 0)
    {
        temp *= 10;
        temp += numDup % 10;
        numDup /= 10;
    }

    if (temp == num)
    {
        printf("%d is pallindrome", num);
    }

    else
    {
        printf("%d is not pallindrome", num);
    }

    return 0;
}