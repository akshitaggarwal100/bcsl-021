#include <stdio.h>

void main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    int flag = 0;

    if (num == 0 || num == 1)
    {
        flag = 1;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d is not prime", num);
    }

    else if (flag == 0)
    {
        printf("%d is prime", num);
    }
}