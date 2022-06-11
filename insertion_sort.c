#include<stdio.h>
int main() {

    int a[10],n,i,j,t;

    printf("Enter no. of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 1; i < n; i++)
    {                          //insersion sort
        t=a[i];
        j=i-1;
        while (j >= 0 && a[j] > t)
        {
            a[j+1] = a[j];
            a[j] = t;
            j--;
        }
        
    }

     for ( i = 0; i < n ; i++)
    {
        printf("a[%d]=%d, ",i,a[i]);
    }

     
    return 0;
}