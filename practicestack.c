#include <stdio.h>
#include <conio.h>
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

void push()
{
    int num;
    if (isfull())
    {
        printf("Enter number to push :");
        scanf("%d", &num);
        top++;
        sta[top] = num;
        printf("Number Pushed");
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

void pop()
{

    if (isempty())
    {
        printf("Element poped = %d", sta[top]);
        top--;
    }
}
void peek()
{

    if (isempty())
    {
        printf("Element at top %d = %d", top, sta[top]);
    }
}
void display()
{
    printf("Element in stack :");
    for (int i = top; i >= 0; i--)
    {
        printf(" %d", sta[i]);
    }
}
int main()
{

    int c;
    printf("Enter max no. in stack : ");
    scanf("%d",&max);

    int r;
r:
    printf("\n1)Push\n2)Pop\n3)Peek\n4)Display\n5) Isempty\n6)Isfull\n7)Exit\nEnter choice :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        push();
        getch();
        system("cls");
        goto r;
        break;
    case 2:
        pop();
        getch();
        system("cls");
        goto r;
    case 3:
        peek();
        getch();
        system("cls");
        goto r;
    case 4:
        display();
        getch();
        system("cls");
        goto r;
    case 5:
        if (isempty())
        {
            printf("Stack is not empty");
        }
        getch();
        system("cls");
        goto r;
    case 6:

        if (isfull())
        {
            printf("Stack is not full");
        }
        getch();
        system("cls");
        goto r;
    case 7:
        printf("****System Exit****");
        break;
    default:
        printf("Invalid choice! Try again");
        goto r;
    }
    return 0;
}