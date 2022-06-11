#include <stdio.h>

struct stack
{
    int data[20];
    int top;
} s;

int max, min;

int push()
{
      int num;
        
    if (s.top == max - 1)
    {
        printf("Stack is full");

        return 0;
    }
    else
    {
       while (s.top<max)
       {
           printf("Enter number to push :");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.data[s.top] = num;
        printf("number added\n");
       }
       
      
    }
}


int main()
{
int c;
    printf("Enter number of elements :");
    scanf("%d", &max);
    printf("1) PUSH \n 2) POP \n Enter choice :");
    scanf("%d",&c);
   
         push();
    
      
     

    return 0;
}