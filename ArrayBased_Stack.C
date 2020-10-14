#include <stdio.h>
#include <conio.h>
#define Max 100
int arr[Max];
int top = -1;

void push(int x)
{
    if (top == (Max - 1))
    {
        printf("Error : Stack overflow \n");
        return;
    }
    arr[++top] = x;
}

void pop()
{
    if (top == -1)
    {
        printf("Error : Stack underflow \n");
        return;
    }
    top--;
}

void print()
{
    printf("Stack : ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    push(56);
    print();
    push(45);
    print();
    push(2);
    print();
    pop();
    print();
    push(432);
    print();
    getch();
    return 0;
}
