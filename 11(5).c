// 5. Find Maximum Element in a 2-D Array Using Pointers.
#include <stdio.h>

void main()
{
    int a[10][10];
    int r, c, i, j;
    int max;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }

    max = *(*(a+0)+0);   

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(*(*(a+i)+j) > max)
            {
                max = *(*(a+i)+j);
            }
        }
    }

    printf("Maximum element in matrix = %d", max);
}
