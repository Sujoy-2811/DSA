#include <stdio.h>
#include <string.h>
#include <conio.h>
#define Max 100
char stack[Max];
char str[Max];
int Index = -1;
bool result;

//Push action for stack
void push(char x)
{
    stack[++Index] = x;
}

//Pop action for stack
void pop()
{
    Index--;
}

//Top action for stack
char top()
{
    char c = stack[Index];
    return c;
}

//Check top element with given char
bool pair(char ch)
{
    //Changing closee bracket with open
    char patner;
    switch (ch)
    {
    case ')':
        patner = '(';
        break;
    case '}':
        patner = '{';
        break;
    case ']':
        patner = '[';
        break;

    default:
        return 0;
    }

    if (patner = top())
        return 1;
    else
        return 0;
}

//Check the given expression
bool check()
{
    for (int i = 0; i < strlen(str); i++)
    {
        char checkpoint = str[i];
        if (checkpoint == '(' | checkpoint == '{' | checkpoint == '[')
            push(checkpoint);
        else if (checkpoint == ')' | checkpoint == '}' | checkpoint == ']')
        {
            if ((Index == -1) | !pair(checkpoint))
                return 0;
            else
            {
                pop();
            }
        }
    }

    if (Index == -1)
        return 1;
    else
        return 0;
}

//Print the result
void print(bool x)
{
    if (x == true)
        printf("\nGiven parentheses is balanced\n");
    else
        printf("\nGiven parentheses is unbalanced\n");
}

int main()
{
    printf("Enter parentheses (Balanced/Unbalanced)\n");
    gets(str);
    printf("Note : Other characters will be ignored\n");
    result = check();
    print(result);
    getch();
    return 0;
}
