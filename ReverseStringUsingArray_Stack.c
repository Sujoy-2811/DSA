#include <stdio.h>
#include <string.h>
#include <conio.h>
#define Max 100
char stack[Max];
char str[Max];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    char c = stack[top];
    top--;
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
    for (int i = 0; i < size; i++)
    {
        push(str[i]);
    }

    for (int i = 0; i < size; i++)
    {
        str[i] = pop();
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
}
