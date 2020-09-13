#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void bubbleSort(int arrray[], int);
void printArray(int arrray[], int);

int main()
{
    int n, item;
    printf("Enter the size of array to generate random array : ");
    scanf("%d", &n);

    // Create random array of n size
    int arr[n];
    printf("\n \n--------------------------------Before Sorted--------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    printArray(arr, n);

    printf("\n\nPress any key to sort the given array");
    getch();

    bubbleSort(arr, n);
    printf("\n \n--------------------------------After Sorted--------------------------------\n");
    printArray(arr, n);

    getch();
    return 0;
}

void bubbleSort(int arr[], int size)
{
    int i, j, temp = 1;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
