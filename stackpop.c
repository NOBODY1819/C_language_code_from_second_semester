#include<stdio.h>
struct stackpop
{
    int data[10];
    int top;
}s;
int min =-1,max;
int pop(){

    if (s.top==min)
    {
        printf("Stack is empty");
        return 0;
    }else{

        printf("Element = %d",s.data[s.top]);
        int t=s.data[s.top];
        s.top=s.top-1;
    }
    
}
int main() {
     
     printf("Enter total number :");
     scanf("%d",&max);

     pop();

    return 0;
}