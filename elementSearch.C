#include<stdio.h>
#include<conio.h>

void search(int arr[], int l, int x)
{
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == x)
        {
            printf("Value of %d is %d", x, i);
            break;
        }

    }

}


int main()
{
    int arr[] ={ 3, 5, 42, 56, 76, 345, 666 };
    int l = 7;
    int x = 42;
    search(arr, l, x);
    getch();
    return 0;
}
