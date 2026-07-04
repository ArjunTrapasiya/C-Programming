// 1. Add two matrices using Pointers. 
#include <stdio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }

  
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
        }
    }

    printf("\nResultant Matrix (A + B):\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d ", *(*(c + i) + j));
        }
        printf("\n");
    }
}
