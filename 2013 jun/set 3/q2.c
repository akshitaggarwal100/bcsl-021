#include <stdio.h>

void main()
{
    int fibb(int num);
    for (int i = 1; i <= 20; i++)
    {
        printf("%d ", fibb(i));
    }
}

int fibb(int num)
{
    if (num == 1)
    {
        return 0;
    }

    else if (num == 2)
    {
        return 1;
    }

    else
    {
        int temp = fibb(num - 1) + fibb(num - 2);
        return temp;
    }
}