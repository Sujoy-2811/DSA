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

void deleteNode(int p)
{
    int i;
    node *temp = head;
    if (p == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }

    for (i = 0; i < p - 2; i++)
    {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
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
    insert(3);
    insert(4);
    insert(36);
    insert(8);
    insert(0);
    print();
    printf("\nEnter the position (1-5)\n");
    scanf("%d", &x);
    if (x<1 | x> 5)
    {
        printf("Given input is invalid");
        return 0;
    }
    deleteNode(x);
    print();
    getch();
    return 0;
}
