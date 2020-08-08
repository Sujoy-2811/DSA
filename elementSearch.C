#include<iostream>
using namespace std;

void search(int arr[], int l, int x)
{
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == x)
        {
            cout<< "Position of "<< x << " is "<< i;
            break;
        }

    }

}


int main(int argc, char const *argv[])
{
    int arr[] ={ 3, 5, 42, 56, 76, 345, 666 };
    int l = 7;
    int x = 42;
    search(arr, l, x);
    return 0;
}
