#include<stdio.h>
int max,j;
 struct stackquestion
 {
     int data[10];
     int top;
 }s;

int push(){
int i,num;
if (j==max)
{
    printf("Stack is full");
    return 0;
}else{
    while (j<max)
    {
printf("Enter number :");
scanf("%d",&num);
j++;
for ( i = j; i >= s.top; i--)
{   
    s.data[i]=s.data[i-1];
    
}
s.data[s.top]=num;
   

      }
   }
}

int display(){

    j=0;
    while (j<max)
   {
     printf("%d ",s.data[j]);
     j++;
   }
}
 
 int main() {

   printf("Enetr max number of elements :");
   scanf("%d",&max);
   s.top=0;
   j=0;

    int c,r;
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