#include<stdio.h>
int main() {
    
     int a[6],i,s,f=0;

     printf("Enter elements for array :");
     for ( i = 0; i < 6; i++)
     {
         scanf("%d",&a[i]);
     }
     
     printf("Enter number to search :"); //linear search
     scanf("%d",&s);
     for ( i = 0; i < 6; i++)
     {
         if (a[i]==s)
         {
             printf("Element at index %d is %d",i+1,a[i]);
            f++;
            break;
         }
         
     }
     if (f==0)
     {
         printf("Number not found");
     }
     
    return 0;
}