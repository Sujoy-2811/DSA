#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *top;

void push(int x)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop()
{
    node *temp;
    if (top == NULL)
        return;
    temp = top;
    top = temp->next;
    free(temp);
}

void print()
{
    node *temp = top;
    printf("Stack : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
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