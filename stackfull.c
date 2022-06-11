#include <stdio.h>

struct stack
{
    int data[20];
    int top;
} s;

int max, min;
int isempty()
{
    if (s.top == min)
    {
        printf("Stack is empty");
        return 0;
    }
    return 1;
}

int isfull()
{

    if (s.top == max - 1)
    {
        printf("Stack is full");
        return 0;
    }
    return 1;
}
int push()
{
    int num;

    if (isfull() != 0)
    {
        while (s.top < max)
        {
            printf("Enter number to push :");
            scanf("%d", &num);
            s.top = s.top + 1;
            s.data[s.top] = num;
            printf("Number added\n");
        }
    }
}

int pop()
{

    if (isempty() != 0)
    {

        printf("\nElement poped = %d", s.data[s.top]);
        int t = s.data[s.top];
        s.top = s.top - 1;
    }
}

int peek(){

 if (isempty() != 0)
    {

        printf("\nElement at top = %d", s.data[s.top]);
    }   
}
int main()
{
    int c;
    printf("Enter  max number of elements :");
    scanf("%d", &max);
    s.top=0;
    int r;
    r :
    clrcsr();
    printf("\n 1) PUSH \n 2) POP \n 3) PEEK \n 4) ISEMPTY \n 5) ISFULL \n 6) EXIT\n Enter choice :");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        push();
        goto r;
        break;

    case 2:
        pop();
        goto r;
        break;
    case 3:
        peek();
        goto r;
        break;
    case 4:
        isempty();
        goto r;
        break;
    case 5:
        isfull();
        goto r;
        break;
    case 6:
    break;
    default:
    printf("INVALID CHOICE");
    goto r;
        break;
    }

    return 0;
}