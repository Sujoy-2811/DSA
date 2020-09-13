#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void search(int arr[], int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            printf("\nPosition of %d is %d", item, i + 1);
            break;
        }

        if (i == (size - 1))
            printf("\nGiven element is not available in Array");
    }
}

int main()
{
    int n, item;
    printf("Enter the size of array to generate random array : ");
    scanf("%d", &n);

    // Create random array of n size
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;

        printf("%d\t", arr[i]);
    }

    printf("\n \nEnter the element to search in given array : ");
    scanf("%d", &item);

    search(arr, n, item);
    getch();
    return 0;
}
