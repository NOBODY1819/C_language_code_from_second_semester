#include <stdio.h>
int main()
{

    int a = 5;
    int p[10];

    printf("Enter elements for array :");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("element at a{%d]= %d\n", i, p[i]);
    }
    printf("Enter the position to delete :");
    int x;
    scanf("%d", &x); // deleting an element from an array(with condition)
    if (x >= 0 && x < a)
    {
        for (int i = x; i < a; i++)
        {
            p[i] = p[i + 1];
        }

        a--;
        for (int i = 0; i < a; i++)
        {
            printf("element at a{%d]= %d\n", i, p[i]);
        }
    }
    else
    {
        printf("INVALID POSITION");
    }

    return 0;
}