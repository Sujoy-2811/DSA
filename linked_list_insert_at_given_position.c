#include<stdio.h>
#include<stdlib.h>
struct node
{
    int item;
    struct node *link;
};
struct node *START = NULL;
struct node *create_node()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    return ptr;
}
void insert_element()
{
    int number;
    struct node *temp;
    
    while(1)
    {
        struct node *ptr = create_node();
        printf("Enter number {Press '0' to close} : ");
        scanf("%d",&number);
        if(number==0)
            break;
        if(ptr==NULL)
        {
            printf("OVERFLOW .. \n");
        }
        else
        {
            ptr->item = number;
            if(START == NULL)
            {
                START = ptr;
                ptr->link = NULL;
                printf("Value is inserted ... \n");
            }
            else
            {
                temp = START;
                while(temp->link != NULL)
                    temp = temp->link;
                temp->link = ptr;
                ptr->link = NULL;
                printf("Value is inserted ... \n");
            }
        }
    }
}
void insert_element_n_position()
{
    struct node *temp = create_node();
    struct node *p = START;
    if(START == NULL)
        printf("\nBlock is Empty\n");
    else
    {
        int position, element;
        printf("Enter position number : ");
        scanf("%d",&position);
        printf("Enter element : ");
        scanf("%d",&element);
        temp->item = element;
        for(int i=0; i<position-1 && p != NULL; i++)
            p = p->link;
        temp->link = p->link;
        p->link = temp;
    }
}
void show_element()
{
    struct node *p = START;
    if(p==NULL)
        printf("\nEmpty block ..\n");
    else
    {
        while(p != NULL)
        {
            printf("%d ",p->item);
            p = p->link;
        }
    }
    printf("\n");
}
int main()
{
    int num;
    while(1)
    {
        printf("\n1. Insert element at last position\n");
        printf("2. Insert element at nth position\n");
        printf("3. Show element\n");
        printf("4. Exit program\n");
        printf("\nEnter your choise :: ");
        scanf("%d",&num);
        printf("\n");
        switch (num)
        {
        case 1:
            insert_element();
            break;
        case 2:
            insert_element_n_position();
            break;
        case 3:
            show_element(); 
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    }  
    return 0;
}