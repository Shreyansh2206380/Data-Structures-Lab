#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the sparse matrix: ");
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
}