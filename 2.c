#include <stdio.h>
int countNonZero(int matrix[][100], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}
void upperTriangular(int matrix[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}
void diagonalElements(int matrix[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i - 1 || j == i + 1)
            {
                printf("%d ", matrix[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Number of nonzero elements: %d\n", countNonZero(matrix, n));
    printf("Upper triangular matrix:\n");
    upperTriangular(matrix, n);
    printf("Elements above and below the main diagonal:\n");
    diagonalElements(matrix, n);
    return 0;
}
