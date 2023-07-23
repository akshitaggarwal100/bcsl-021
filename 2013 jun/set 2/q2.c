#include <stdio.h>

void main()
{
    int factorial(int num);
    printf("%d", factorial(4));
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return (num * factorial(num - 1));
    }
}