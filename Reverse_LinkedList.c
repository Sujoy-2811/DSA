#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

void insert(int x)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void reverseList()
{
    node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void print()
{
    node *temp = head;
    printf("List : ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int i, n, x;
    head = NULL;
    insert(4);
    insert(6);
    insert(1);
    insert(9);
    insert(3);
    insert(13);
    insert(54);
    insert(46);
    insert(96);
    insert(100);
    print();
    reverseList();
    printf("\n\nReversed ");
    print();
    getch();
}
