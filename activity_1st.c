#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void insertion(int *x, int s) // array and size
{
    int p, e; // position,element
    printf("\nEnter position to edit :");
    scanf("%d", &p);
    if (p > 0 && p <= s)
    {

        printf("Enter element :");
        scanf("%d", &e);

        for (int i = s - 1; i >= p - 1; i--)
        {
            x[i + 1] = x[i];
        }
        x[p - 1] = e;
        printf("\nNew elements in array :");
        for (int i = 0; i <= s; i++)
        {
            printf(" %d", x[i]);
        }
    }
    else
    {
        printf("Invalid position");
    }
}
void linear_search(int *x)
{
    int s, f; // search,found
    printf("Enter number to search :");
    scanf("%d", &s);
    for (int i = 0; i < 6; i++)
    {
        if (x[i] == s)
        {
            printf("Element at index %d is %d", i, x[i]);
            f++;
            break;
        }
    }
    if (f == 0)
    {
        printf("Number not found");
    }
}
void deletion(int *b, int s)
{

    int x; // positon
    printf("Enter the position to delete :");
    scanf("%d", &x);
    if (x >= 0 && x < s)
    {
        for (int i = x; i < s; i++)
        {
            b[i] = b[i + 1];
        }
        printf("Element deleted");
        printf("\nNew array :");
        s--;
        for (int i = 0; i <= s; i++)
        {
            printf(" %d\n", b[i]);
        }
    }
    else
    {
        printf("INVALID POSITION");
    }
}
int main()
{

    int choice, n, r; // choice,numbers,return
    printf("Enter size of array :");
    scanf("%d", &n);
    int *a = (int *)(calloc(n, sizeof(int))); //declaring aeeay dynamicaly

    printf("Enter no in array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array :");

    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

r:
    printf("\n1) Insertion\n 2) Search\n 3) Deletion \n 4) Exit\nEnter choice :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insertion(a, n);  //giving array and size to function
        
        getch();   //hold screen
        system("cls");  //clear screen
        goto r;
    case 2:
        linear_search(a);
        getch();
        system("cls");
        goto r;
    case 3:
        deletion(a, n);
        getch(); 
        system("cls");  
        goto r;
    case 4:
        printf("\n****System Exit***");
        break;

    default:
        printf("Invalid choice. Retry");
        goto r;
    }

    return 0;
}