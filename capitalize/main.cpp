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
        char current = text[i];

        if (current == 'a' || current == 'b') {
            text[i] = toupper(current);
            counter++;
        }
    }

    if (len % 2 != 0) {
        int middleIndex = (len - 1) / 2;
        char middle = text[middleIndex];

        if (middle != toupper(middle)) {
            text[middleIndex] = toupper(middle);
            counter++;
        }
    }

    cout << "Zmieniony wyraz: " << text << "\n";
    cout << "Liczba zmian: " << counter << "\n";
}
