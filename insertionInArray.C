#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void insert(int array[], int size, int loc, int item);
void printArray(int array[], int);

int main()
{
    int n, size, loc, item;
    printf("Enter the size of array to generate random array : ");
    scanf("%d", &n);
    size = n + 1;

    // Create random array of n size
    int arr[n];
    printf("\n \n--------------------------------Before Insertion--------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    printArray(arr, n);

    printf("\nEnter the item to insert : ");
    scanf("%d", &item);

    printf("\nEnter the index no. for new element : ");
    scanf("%d", &loc);

    insert(arr, size, loc, item);
    printf("\n \n--------------------------------After Insertion--------------------------------\n");
    printArray(arr, size);

    getch();
    return 0;
}

void insert(int arr[], int size, int loc, int item)
{
    for (int i = size - 1; i >= loc; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc] = item;
}

void printArray(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}