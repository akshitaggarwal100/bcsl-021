#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            printf("it is divisible by %d\n", i);
            break;
        }

        else if (i == num / 2 - 1 && num % i != 0)
        {
            printf("%d is a prime number", num);
        }
    }

    return 0;
}
