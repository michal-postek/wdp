#include <iostream>
#include <math.h>

using namespace std;

void sortArrayDescending(int* numbers, int size);
bool checkIfPythagorean(int x, int y, int z);
int getAbsoluteValue(int number);
int promptPositiveNumber(string text);

int main()
{
    int x, y, z;

    x = promptPositiveNumber("Podaj pierwszy bok: ");
    y = promptPositiveNumber("Podaj drugi bok: ");
    z = promptPositiveNumber("Podaj trzeci bok: ");

    bool isPythagorean = checkIfPythagorean(x, y, z);

    if (isPythagorean) {
        cout << "Trójkąt jest pitagorejski";
    } else {
        cout << "Trójkąt nie jest pitagorejski";
    }
}

int promptPositiveNumber(string text) {
    int x;

    cout << text;
    cin >> x;

    return getAbsoluteValue(x);
}

int getAbsoluteValue(int number) {
    return number < 0 ? -number : number;
}

bool checkIfPythagorean(int x, int y, int z) {
    int numbers[3] = {x, y, z};
    sortArrayDescending(numbers, 3);

    if (pow(numbers[0], 2) == pow(numbers[1], 2) + pow(numbers[2], 2)) {
        return true;
    }

    return false;
}

void sortArrayDescending (int* numbers, int size) {
    int i, j, prev, next;

    for (i = 0; i < size; i++) {
        for (j = 0; j + 1 < size - i; j++) {
            prev = numbers[j];
            next = numbers[j + 1];

            if (prev < next) {
                numbers[j] = next;
                numbers[j + 1] = prev;
            }
        }
    }
}
