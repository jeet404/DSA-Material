#include <stdio.h>
#include <conio.h>
#define SIZE 5
void select_sort(int[]);
void main()
{
    int a[SIZE], i;
    //clrscr();
    printf("\n\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("ENTER VALUE[%d]", i);
        scanf("%d", &a[i]);
    }
    select_sort(a);
    getch();
}
void select_sort(int arr[])
{
    int i, j, t = 0;
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("Sorted Element");
    for (i = 0; i < SIZE; i++)
    {
        printf("\n %d", arr[i]);
    }
    getch();
}
