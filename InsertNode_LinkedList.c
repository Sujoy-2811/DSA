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
    printf("How many numbers ?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the number\n");
        scanf("%d", &x);
        insert(x);
        print();
    }
    printf("\n\nFinal ");
    print();
    getch();
}