#include <stdio.h>
#include "matrix.h"

int main()
{
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

    int rows, cols;
    int r1, c1, r2, c2;
    int choice, det;

    printf("\n===== MATRIX LIBRARY =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Determinant\n");
    printf("5. Transpose\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:

            printf("Enter rows and columns: ");
            scanf("%d %d", &rows, &cols);

            printf("Enter Matrix A:\n");
            inputMatrix(A, rows, cols);

            printf("Enter Matrix B:\n");
            inputMatrix(B, rows, cols);

            addMatrix(A, B, result, rows, cols);

            printf("\nAddition Result:\n");
            displayMatrix(result, rows, cols);

            break;


        case 2:

            printf("Enter rows and columns: ");
            scanf("%d %d", &rows, &cols);

            printf("Enter Matrix A:\n");
            inputMatrix(A, rows, cols);

            printf("Enter Matrix B:\n");
            inputMatrix(B, rows, cols);

            subtractMatrix(A, B, result, rows, cols);

            printf("\nSubtraction Result:\n");
            displayMatrix(result, rows, cols);

            break;


        case 3:

            printf("Enter rows and columns of Matrix A: ");
            scanf("%d %d", &r1, &c1);

            printf("Enter rows and columns of Matrix B: ");
            scanf("%d %d", &r2, &c2);

            if (c1 != r2)
            {
                printf("\nMultiplication is not possible.\n");
                break;
            }

            printf("Enter Matrix A:\n");
            inputMatrix(A, r1, c1);

            printf("Enter Matrix B:\n");
            inputMatrix(B, r2, c2);

            multiplyMatrix(A, B, result, r1, c1, c2);

            printf("\nMultiplication Result:\n");
            displayMatrix(result, r1, c2);

            break;


        case 4:

            printf("Enter matrix size (2 or 3): ");
            scanf("%d", &rows);

            if (rows != 2 && rows != 3)
            {
                printf("\nOnly 2x2 and 3x3 matrices are supported.\n");
                break;
            }

            printf("Enter Matrix:\n");
            inputMatrix(A, rows, rows);

            det = determinant(A, rows);

            printf("\nDeterminant = %d\n", det);

            break;


        case 5:

            printf("Enter rows and columns: ");
            scanf("%d %d", &rows, &cols);

            printf("Enter Matrix:\n");
            inputMatrix(A, rows, cols);

            transposeMatrix(A, result, rows, cols);

            printf("\nTranspose Result:\n");
            displayMatrix(result, cols, rows);

            break;


        default:

            printf("\nInvalid choice.\n");
    }

    return 0;
}
