#include <stdio.h>
int main()
{
    int a[10], last = 9, first = 0, mid, x, b = 0;

    printf("Enter elements for array :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to search :");
     scanf("%d", &x);
     do                   //binary search
    {
         mid = (first + last) / 2;
        if (a[0] == x)
        {
            printf("Element at a[0]=%d", a[0]);
            b++;
            break;  }

        if (a[mid] == x)
         { 
            printf("Element at a[%d] is %d", mid, a[mid]);
            b++;
            break;
         }
           if (a[mid] > x)
           { 
            last = mid;
           }

        if (a[mid] < x)
        {  
           first = mid;
        }

    } while (b != 1|| mid<0);
    return 0;
}