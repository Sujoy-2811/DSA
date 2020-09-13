#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void binarySearch(int arr[], int size, int item)
{
    int mid = (size - 1) / 2;
    if (arr[mid] == item)
    {
        printf("Position of %d is %d", item, (mid + 1));
    }
    else if (arr[mid] > item)
    {
        mid--;
        while (1)
        {
            if (arr[mid] == item)
            {
                printf("Position of %d is %d", item, (mid + 1));
                break;
            }

            if (mid == 0)
            {
                printf("\nGiven element is not available in Array");
                break;
            }

            mid--;
        }
    }
    else
    {
        mid++;
        while (1)
        {
            if (arr[mid] == item)
            {
                printf("Position of %d is %d", item, (mid + 1));
                break;
            }

            if (mid == (size - 1))
            {
                printf("\nGiven element is not available in Array");
                break;
            }

            mid++;
        }
    }
}

int main(int argc, char const *argv[])
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

    binarySearch(arr, n, item);
    return 0;
}
