#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//count nodes
int count = 0;

//node struct
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;

//Insert nodes at any position (upto total node +1)
void insertAt(int x, int p)
{
    int i;
    count++;
    //new node
    node *temp = (node *)malloc(sizeof(node));
    //insert data
    temp->data = x;
    temp->next = NULL;
    //whether list is empty or note
    if (p == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    node *temp2 = head;
    //finding position-1 node
    for (i = 0; i < p - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

//display current list with no. of nodes
void display()
{
    node *temp = head;
    printf("List : ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n\n   Total nodes = %d", count);
    printf("\n----------------------------------------------------\n");
}

//deleting node at any position
void deleteNode(int p)
{
    int i;
    count--;
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

int main()
{
    int opt = 1, position, value, arrow = 26;
    head = NULL;
    insertAt(3, 1);
    insertAt(4, 2);
    insertAt(36, 2);
    insertAt(8, 3);
    insertAt(0, 3);
    display();
    while (opt == 1 || opt == 2)
    {
        printf("\nNode %c %c  Insert : 1 \tDelete : 2 \tFinal list : 3 %c %c ", arrow, arrow, arrow, arrow);
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("\nenter the position where you want to insert: ");
            scanf("%d", &position);

            if (position < 1 || position > count + 1)
            {
                printf("\n\t invalid position: ");
                break;
            }
            else
            {
                printf("Enter the value (Integer type) : ");
                scanf("%d", &value);
                insertAt(value, position);
                display();
                break;
                // if (position == 1)
                // {
                //     ins_beg();
                //     display();
                //     break;
                // }
                // else if (position == count + 1)
                // {
                //     ins_end();
                //     display();
                //     break;
                // }
                // else
                // {
                //     ins_pos(position);
                //     display();
                //     break;
                // }
            }
        case 2:
            printf("\nenter the position where you want to delete: ");
            scanf("%d", &position);
            deleteNode(position);
            display();
            break;

        case 3:
            display();
            break;
        default:
            printf("\n\t\t-----------Invalid entry-----------\n");
            opt = 1;
        }
        if (opt == 3)
        {
            break;
        }
    }
    getch();
    return 0;
}
