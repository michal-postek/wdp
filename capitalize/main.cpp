#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    string text;
    cout << "Podaj wyraz: ";
    cin >> text;

    int len = text.length();

    for (int i = 0; i < len; i++) {
        if (text[i] == 'a') {
            text[i] = 'A';
            counter++;
        } else if (text[i] == 'b') {
            text[i] = 'B';
            counter++;
        }
    }

    if (len % 2 != 0) {
        char middle = text[(len - 1) / 2];

        if (middle != 'A' && middle != 'B') {
            text[len / 2] = toupper(text[len / 2]);
            counter++;
        }
    }

    cout << "Zmieniony wyraz: " << text << "\n";
    cout << "Liczba zmian: " << counter << "\n";
}
