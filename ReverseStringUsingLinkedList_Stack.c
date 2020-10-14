#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define Max 100
char str[Max];

typedef struct node
{
    int data;
    struct node *next;
} node;
node *top;

void push(char x)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

char pop()
{
    char c;
    node *temp = top;
    top = top->next;
    c = temp->data;
    free(temp);
    return c;
}

void print(int size)
{
    printf("String : ");
    for (int i = 0; i <= size; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

void reverse(char *str, int size)
{
    node *temp = top;
    int i = 0;

    while (str[i])
    {
        push(str[i]);
        i++;
    }

    i = 0;

    while (str[i])
    {
        str[i] = pop();
        i++;
    }
}

int main()
{
    printf("Enter the string : ");
    gets(str);
    printf("Before reverse : ");
    print(strlen(str));
    reverse(str, strlen(str));
    printf("After reverse : ");
    print(strlen(str));
    getch();
}
