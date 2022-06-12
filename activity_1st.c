
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int s;
int *a;

void insertion(int *x) // function for insertion in array
{
    int p, e; // position,element
    printf("\nEnter position to edit :");
    scanf("%d", &p);
    if (p > 0 && p <= s)
    {

        printf("Enter element :");
        scanf("%d", &e);
        s++;
        for (int i = s - 1; i >= p; i--)
        {
            x[i + 1] = x[i];
        }
        x[p] = e;
        printf("\nNew elements in array :");
        for (int i = 0; i < s; i++)
        {
            printf(" %d", x[i]);
        }
    }
    else
    {
        printf("Invalid position");
    }
    getch();       // hold screen
    system("cls"); // clear screen
}
void linear_search(int *x) // function for linear search in array
{
    int e, f = 0; // element,found
    printf("Enter number to search :");
    scanf("%d", &e);
    for (int i = 0; i < s; i++)
    {
        if (x[i] == e)
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
void deletion(int *b) // function for deletion in array
{

    int x; // positon
    printf("Enter the position to delete :");
    scanf("%d", &x);
    if (x >= 0 && x <= s)
    {
        for (int i = x-1; i < s; i++)
        {
            b[i] = b[i + 1];
        }
        printf("Element deleted");
        printf("\nNew array :");
        s--;
        for (int i = 0; i < s; i++)
        {
            printf(" %d", b[i]);
        }
    }
    else
    {
        printf("INVALID POSITION");
    }
}
int main()
{

    int choice, r; // choice,numbers,return
    printf("Enter size of array :");
    scanf("%d", &s);
    a = (int *)(calloc(s, sizeof(int))); // declaring array dynamicaly
    printf("Enter no in array :");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in array :");

    for (int i = 0; i < s; i++)
    {
        printf(" %d", a[i]);
    }

r:
    printf("\n1) Insertion\n 2) Search\n 3) Deletion \n 4) Exit\nEnter choice :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insertion(a); // giving array to function

        goto r;
    case 2:
        linear_search(a);
        getch();
        system("cls");
        goto r;
    case 3:
        deletion(a);
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