#ifndef MATRIX_H
#define MATRIX_H

#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void displayMatrix(int matrix[MAX][MAX], int rows, int cols);

void addMatrix(int A[MAX][MAX], int B[MAX][MAX],
               int result[MAX][MAX], int rows, int cols);

void subtractMatrix(int A[MAX][MAX], int B[MAX][MAX],
                    int result[MAX][MAX], int rows, int cols);

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX],
                    int result[MAX][MAX],
                    int r1, int c1, int c2);

int determinant(int matrix[MAX][MAX], int n);

void transposeMatrix(int matrix[MAX][MAX],
                     int result[MAX][MAX],
                     int rows, int cols);

#endif
