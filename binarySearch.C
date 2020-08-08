#include<stdio.h>
#include<conio.h>

void binarySearch(int arr[], int l, int a, int x)
{
    int mid = (a+l-1)/2;
    if (arr[mid] == x)
    {
        printf("Value of %d is %d", x, mid);

    }
    else if (arr[mid] > x)
    {
        mid--;
        while (1)
        {
            if (arr[mid]== x)
            {
                printf("Value of %d is %d", x, mid);
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
            if (arr[mid]== x)
            {
                printf("Value of %d is %d", x, mid);
                break;
            }

            mid++;
        }
    }



}


int main(int argc, char const *argv[])
{
    int arr[] ={ 3, 5, 42, 56, 76, 345, 666 };
    int l = 7;
    int a =0;
    int x = 666;
    binarySearch(arr, l, a, x);
    return 0;
}
