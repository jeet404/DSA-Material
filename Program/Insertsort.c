#include <stdio.h>
#include <conio.h>
#define SIZE 5
void main()
{
    int a[SIZE], i, j, k, t;
    //clrscr();
    for (i = 0; i < SIZE; i++)
    {
        printf("ENTER VALUE :-");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];
                for (k = i; k > j; k--)
                    a[k] = a[k - 1];
                a[k + 1] = t;
            }
        }
    }
    printf("------\nSorted Value------");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n\t%d", a[i]);
    }
    getch();
}
