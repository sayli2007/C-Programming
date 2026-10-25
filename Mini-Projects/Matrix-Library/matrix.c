#include <stdio.h>
#include "matrix.h"

void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[MAX][MAX], int B[MAX][MAX],
               int result[MAX][MAX], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrix(int A[MAX][MAX], int B[MAX][MAX],
                    int result[MAX][MAX], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX],
                    int result[MAX][MAX],
                    int r1, int c1, int c2)
{
    int i, j, k;

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int determinant(int matrix[MAX][MAX], int n)
{
    if (n == 2)
    {
        return (matrix[0][0] * matrix[1][1])
             - (matrix[0][1] * matrix[1][0]);
    }

    if (n == 3)
    {
        return matrix[0][0] *
                   (matrix[1][1] * matrix[2][2]
                  - matrix[1][2] * matrix[2][1])

             - matrix[0][1] *
                   (matrix[1][0] * matrix[2][2]
                  - matrix[1][2] * matrix[2][0])

             + matrix[0][2] *
                   (matrix[1][0] * matrix[2][1]
                  - matrix[1][1] * matrix[2][0]);
    }

    return 0;
}

void transposeMatrix(int matrix[MAX][MAX],
                     int result[MAX][MAX],
                     int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}
