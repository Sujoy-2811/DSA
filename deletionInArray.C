#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void deleteItem(int array[], int *size, int loc);
void printArray(int array[], int);

int main()
{
    int size, loc;
    printf("Enter the size of array to generate random array : ");
    scanf("%d", &size);

    // Create random array of n size
    int arr[size];
    printf("\n \n--------------------------------Before Insertion--------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    printArray(arr, size);

    printf("\nEnter the index no. element you want to delete : ");
    scanf("%d", &loc);

    deleteItem(arr, &size, loc);
    printf("\n \n--------------------------------After Insertion--------------------------------\n");
    printArray(arr, size);

    getch();
    return 0;
}

void deleteItem(int arr[], int *size, int loc)
{
    for (int i = loc; i < (*size - 1); i++)
    {
        arr[i] = arr[i + 1];
    }
    *size = *size - 1;
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