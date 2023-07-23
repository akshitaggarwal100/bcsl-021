#include <stdio.h>

void main()
{
    void swap(int *n1, int *n2);
    int a = 3;
    int b = 6;
    int temp = a;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d", a, b);
}

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}