#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int n;
    cout << "Podaj n: ";
    cin >> n;

    if (n < 1) {
        cout << "Podaj poprawną liczbe";

        return 0;
    }

    cout << n << " wyraz ciagu fibonacciego: " << fibonacci(n) << "\n";
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
