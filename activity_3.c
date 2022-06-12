#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[20];
int top = -1;
void push(char c)
{
    s[++top] = c;
}
char pop()
{
    int x = s[top];
    top--;
    return x;
}
int main()
{
    char exp[20], t;
    int i, f = 1;
    printf("Enter expression :");
    scanf("%s", exp);
    for (i = 0; i <= strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top == -1)
            {
                f = 0;
            }
            else
            {
                t = pop();
                if (exp[i] == ')' && (t == '[' || t == '{'))
                {
                    f = 0;
                }
                if (exp[i] == '}' && (t == '(' || t == '['))
                {
                    f = 0;
                }
                if (exp[i] == ']' && (t == '{' || t == '('))
                {
                    f = 0;
                }
            }
        }
    }
    if (top >= 0)
    {
        f = 0;
    }
    if (f == 0)
    {
        printf("Unbalanced\n");
    }
    else
    {
        printf("Balanced\n");
    }
    return 0;
}
