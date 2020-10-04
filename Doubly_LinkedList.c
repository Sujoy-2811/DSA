#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct noode *prev;
} dnode;
dnode *head;

dnode *newdnode(int x)
{
    dnode *node = (dnode *)malloc(sizeof(dnode));
    node->data = x;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void insert(int x)
{
    dnode *node = newdnode(x);
    dnode *temp = head;
    if (head == NULL)
    {
        head = node;
        return;
    }

    head->prev = node;
    node->next = head;
    head = node;
}

void print()
{
    dnode *temp = head;
    printf("List : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reversePrint()
{
    dnode *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("Reversed List : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    insert(45);
    insert(36);
    insert(65);
    insert(89);
    insert(450);
    insert(24);
    insert(67);
    insert(9);
    insert(6);
    insert(5);
    print();
    reversePrint();
    getch();
    return 0;
}