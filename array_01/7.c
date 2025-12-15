#include<stdio.h>
//program to print elements of array with more than 1 frequency 
int main()
{
int arr[10], freq[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value:");
        scanf("%d", arr + i);
        freq[i] = 1;
    }
    printf("Array :");
    for(int i=0;i<10;i++)
    printf("%d ",arr[i]);
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] == -1)
            continue;
        for (int j = i + 1; j < 10; j++)
        {

            if (arr[i] == arr[j])
            {
                freq[i]++;
                freq[j] = -1;
            }
        }
    }
    printf("\nDuplicate elements: ");
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] >= 2)
            printf("\nElement %d --> frequency %d", arr[i], freq[i]);
    }
    printf("\nUnique elements: ");
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] == 1)
            printf("\nElement %d --> frequency %d", arr[i], freq[i]);
    } 
}