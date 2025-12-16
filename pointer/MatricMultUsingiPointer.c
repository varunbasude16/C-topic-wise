#include <stdio.h>

void main() 
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j, k;
																
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < col; j++) 
        {
            scanf("%d", (*(a + i) + j));
        }
    }

    printf("Enter elements of second matrix:\n");
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
         	*(*(c + i) + j)=0;
         	for(k=0;k<col;k++)
            *(*(c + i) + j) += *(*(a + i) + k)*(*(*(b + k) + j));
            
        }
    }
    printf("Resultant Matrix:\n");
    for(i = 0; i < r; i++)
     {
        for(j = 0; j < col; j++) 
        {
            printf("%d ", *(*(c + i) + j));
        }
        printf("\n");
    }
}
