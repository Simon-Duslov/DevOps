#include <iostream>
#include <limits>
#include "isPrime.h"

using namespace std;


int main() {
    setlocale(0, "");
    int n;

    cout << "Enter number: ";

    while (true) {
        cin >> n;

        // Проверка на неправильный ввод
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect input. Please enter integer number: ";
            continue;
        }

        // Ограничение на размер числа
        if (n < 1 || n > 1000000) {
            cout << "Number must be between 1 and 1 000 000: ";
            continue;
        }

        break;
    }

    // Проверка на простоту
    if (isPrime(n)) {
        cout << n << " is prime." << endl;
    } else {
        cout << n << " isn't prime." << endl;
    }

    return 0;
}
