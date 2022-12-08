// cw6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    char characters[10] = "abcdefghi";
    int numbers[10] = { 2, 52, 252, 1, 2, 52, 3 ,76, 12, 17 };
    double numbers2[7] = { 2.321, -42, 42.42, -2.11, 0, 42, -2.12 };
    string words[5] = { "lorem", "ipsum", "ala", "ma", "kota" };

    for (int i = 0; i < sizeof(characters); i+=2) {
        cout << characters[i] << "\n";
    }

    for (int number : numbers) {
        if (!(number % 2)) {
            cout << number << "\n";
        }
    }

    for (double number : numbers2) {
        double abs = number < 0 ? -number : number;
        cout << abs << "\n";
    }

    for (string word : words) {
        int len = word.length();
        cout << word << ": " << len << "\n";
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
