// cw5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int arr_size = 10;

using namespace std;

int main()
{
    int numbers[arr_size] = { 2, 42, 121, 2, -3, 24, 12, 1, 0, 3 };
    int max_index = 0;
    int max = numbers[max_index];

    for (int i = 1; i < arr_size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            max_index = i;
        }
    }

    cout << max;
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
