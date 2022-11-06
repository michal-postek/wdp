#include <iostream>

using namespace std;

double getAbsoluteValue(double number);
double getSquareRoot(double number, double precision);

int main() {
    double number, squareRoot;

    cout << "Podaj liczbę: ";
    cin >> number;

    number = getAbsoluteValue(number);
    squareRoot = getSquareRoot(number, 0.0001);

    cout << "Pierwiastek kwadratowy z liczby " << number << " to " << squareRoot;
}

double getAbsoluteValue(double number) {
    return number * ((number > 0) - (number < 0));
}

double getSquareRoot(double number, double precision = 0.0001) {
    double a = number, b = 1;

    while (getAbsoluteValue(b - a) >= precision) {
        b = (a + b) / 2;
        a = number / b;
    }

    return (a + b) / 2;
}
