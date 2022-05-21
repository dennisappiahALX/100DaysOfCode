#include <stdio.h>
#include <conio.h>
#define N 50
int main()
{
    int i,j, mat_a_rows,mat_a_columns,mat_b_rows, mat_b_columns,k ;
    int matrix_a[N][N],matrix_b[N][N], sum[N][N];
    printf("Enter Matrix A dimensions: ");
    scanf("%d %d", &mat_a_rows, &mat_a_columns);
    
    printf("Enter Matrix B dimensions: ");
    scanf("%d %d", &mat_b_rows, &mat_b_columns);
    if ((mat_a_rows == mat_b_rows && mat_b_rows == mat_b_columns))
    {
        printf("Matrix sum is not possible");
    }
    else
    {
        printf("Enter Matrix A elements: ");
        for (int i = 0; i < mat_a_rows;i++)
        {
            for (int j = 0; j < mat_a_columns; j++)
            {
                scanf("%d", &matrix_a[i][j]);
            }
        }
        printf("Enter Matrix B elements: ");
        for (int i = 0; i < mat_b_rows;i++)
        {
            for (int j = 0; j < mat_b_columns; j++)
            {
                scanf("%d", &matrix_b[i][j]);
            }
        }
        printf("Sum of matrix A and B\n");
        for (int i = 0; i < mat_a_rows;i++)
        {
            for (int j = 0; j < mat_a_columns; j++)
            {
                sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
                printf("%d\t", sum[i][j]); 
            }
            printf("\n");
        }          
    }
    return 0;
}