#include <stdio.h>
int quicksort(int *s,int l,int u);
int sort(int *p, int start, int end);
int swap(int *a, int *b);

int main()
{
    int a[] = {10, 9, 3, 5, 7, 4, 1};

    printf("Before sort ");

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    int lb = 0, ub = 6;
  
    quicksort(a,lb,ub);
    printf("\nAfter sort ");

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int sort(int *p, int start, int end)
{

    int pvt = start;
    // int i=0;
    while (start < end)
    {
        while (p[start] <= p[pvt])
        {
            start++;
        }

        while (p[end] > p[pvt])
        {
            end--;
        }

        swap(&p[start] , &p[end]);

        if (end < start)
        {
            swap(&p[end], &p[pvt]);
        }

        // printf("%d ",i++);

    }
    // printf("&");
    
             for (int i = 0; i < 7; i++)
         {
             printf("%d ", p[i]);
         }
         printf("&\n");
    return end;
}

int swap(int* a, int* b)
{

    int t = *a;
    printf("\n$%d,%d,%d",*a,*b,t);
    *a = *b;
    *b = t;
    // printf("$");
}


int quicksort(int *s,int l,int u){

      if (l < u)
    {
        int e;
        e = sort(s, l, u);
        // printf("? %d ", e);
        quicksort(s, l, e-1);
        quicksort(s, e+1, u);
    }
}