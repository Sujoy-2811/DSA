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

void reverseRecursive(node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverseRecursive(p->next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;
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
    reverseRecursive(head);
    printf("\n\nReversed ");
    print();
    getch();
}
