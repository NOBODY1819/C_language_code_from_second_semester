#include <stdio.h>
int top = -1, max;
int sta[];

int isfull()
{

    if (top == max - 1)
    {
        printf("Overflow");
        return 0;
    }
    return 1;
}

int push()
{
    int num;
    if (isfull())
    {
        printf("Enter number to push :");
        scanf("%d", &num);
        top++;
        sta[top] = num;
    }
}
int isempty()
{

    if (top == -1)
    {
        printf("Underflow");
        return 0;
    }
    return 1;
}

int pop()
{

    if (isempty())
    {
        printf("Element poped = %d", sta[top]);
        top--;
    }
}
int peek()
{

    if (isempty())
    {
        printf("Element at top = %d", sta[top]);
    }
}
int display()
{
    printf("Element in stack :");
    for (int i = top; i >= 0; i++)
    {
        printf(" %d", sta[i]);
    }
}
int main()
{

    int c;
    printf("Enter max no. in stack:");
    scanf("%d", &max);

    int r;
r:
    printf("1)Push\n2)Pop\n3)Peek\n4)Display\n5)Exit\nEnter choice :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        push();
        clrscr();
        goto r;
        break;
    case 2:
        pop();
        clrscr();
        goto r;
    case 3:
        peek();
        clrscr();
        goto r;
    case 4:
        display();
        clrscr();
        goto r;
    case 5:
        break;
    default:
        break;
    }
    return 0;
}