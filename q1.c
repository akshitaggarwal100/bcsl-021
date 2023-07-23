#include <stdio.h>

void main()
{
    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements\n");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
}