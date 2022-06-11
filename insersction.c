#include <stdio.h>
int main()
{

    int a[10];
    int s, p, x;

    printf("Enter no of elements in array :");
    scanf("%d", &s);

    printf("Enter no in array :");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array :");

    for (int i = 0; i < s; i++)
    {
      printf(" %d", a[i]);
    }                      //inserstion in array(with conditions)

    printf("\nEnter position to edit :");
    scanf("%d", &p);
    if (p > 0 && p <= s)
    {
            
        printf("Enter element :");
        scanf("%d", &x);
           
        for (int i = s-1 ; i >=p-1; i--)
        {
            a[i + 1] = a[i];
    
        }
        a[p-1] = x;
        printf("\nNew elements in array :");
        for (int i = 0; i <=s; i++)
        {
            printf(" %d",a[i]);
        }
    }
    else
    {
        printf("Invalid position");
    }

    return 0;
}