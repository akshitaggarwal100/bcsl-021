#include <stdio.h>

void main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int small = n1, gcd = 1;

    if (n2 < n1)
    {
        small = n2;
    }

    for (int i = 1; i <= small; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD: %d", gcd);
}