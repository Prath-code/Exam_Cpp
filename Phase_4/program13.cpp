#include <iostream>
using namespace std;

void inputMatrix(int mat[][3], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat[i][j];
}

void inputMatrixB(int mat[][2], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat[i][j];
}

void printMatrixA(int mat[][3], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            cout << mat[i][j] << "\t";
        cout << endl << endl;
    }
}

void printMatrixB(int mat[][2], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            cout << mat[i][j] << "\t";
        cout << endl << endl;
    }
}

void printResult(int mat[][2], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            cout << mat[i][j] << "\t";
        cout << endl << endl;
    }
}

void multiply(int A[][3], int B[][2], int result[][2], int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; ++i)
    {
        for (int j = 0; j < colsB; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < colsA; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    cout << "Matrix A:\n";
    printMatrixA(A, 2, 3);

    cout << "\nMatrix B:\n";
    printMatrixB(B, 3, 2);

    multiply(A, B, result, 2, 3, 2);

    cout << "\nDot Product (A x B):\n";
    printResult(result, 2, 2);

    return 0;
}
