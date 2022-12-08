// add-matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int matrix_rows = 3;
const int matrix_cols = 3;

void displayMatrix(int matrix[matrix_rows][matrix_cols]);

int main() {
    int matrixA[matrix_rows][matrix_cols];
    int matrixB[matrix_rows][matrix_cols];
    int matrixC[matrix_rows][matrix_cols];
    
    cout << "Podaj wartosci dla pierwszej macierzy \n";

    for (int r = 0; r < matrix_rows; r++) {
        for (int c = 0; c < matrix_cols; c++) {
            cout << "A" << r + 1 << c + 1 << ": ";
            cin >> matrixA[r][c];
        }
    }

    cout << "Podaj wartosci dla drugiej macierzy \n";
    
    for (int r = 0; r < matrix_rows; r++) {
        for (int c = 0; c < matrix_cols; c++) {
            cout << "B" << r + 1 << c + 1 << ": ";
            cin >> matrixB[r][c];

            int sum = matrixA[r][c] + matrixB[r][c];
            matrixC[r][c] = sum;
        }
    }

    cout << "Macierz A: \n";
    displayMatrix(matrixA);
    cout << "Macierz B: \n";
    displayMatrix(matrixB);
    cout << "Suma macierzy: \n";
    displayMatrix(matrixC);
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
