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

void insertAt(int x, int p)
{
    int i;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = NULL;
    if (p == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    node *temp2 = head;
    for (i = 0; i < p - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
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
    int i, n, x, p;
    head = NULL;
    insert(3);
    insert(4);
    insert(36);
    insert(8);
    insert(0);
    print();
    printf("\nEnter the data (Int Type) for new node\n");
    scanf("%d", &x);
    printf("Enter the postion (1-6) for new node\n");
    scanf("%d", &p);
    if (p<0 | p> 6)
    {
        printf("Given input is invalid");
        return 0;
    }
    insertAt(x, p);
    print();
    getch();
    return 0;
}
