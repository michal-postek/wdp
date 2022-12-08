// cw3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int matrix_rows = 3;
const int matrix_cols = 3;

void displayMatrix(int matrix[matrix_rows][matrix_cols]);

int main()
{
    int matrix1[matrix_rows][matrix_cols] = { 1, 2, 3, 6, 2, 8 };
    int matrix2[matrix_rows][matrix_cols] = { 6, 5, 2, 2, 7, 8 };
    int matrix3[matrix_rows][matrix_cols];

    for (int r = 0; r < matrix_rows; r++) {
        for (int c = 0; c < matrix_cols; c++) {
            matrix3[r][c] = matrix1[r][c] + matrix2[r][c];
        }
    }

    displayMatrix(matrix1);
    displayMatrix(matrix2);
    displayMatrix(matrix3);
}

void displayMatrix(int matrix[matrix_rows][matrix_cols]) {
    for (int r = 0; r < matrix_rows; r++) {
        for (int c = 0; c < matrix_cols; c++) {
            cout << matrix[r][c] << " ";
        }

        cout << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
