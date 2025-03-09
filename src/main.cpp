#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // Числа <= 1 не простые
    if (n == 2) return true;   // 2 — простое число
    if (n % 2 == 0) return false;  // Чётные числа, кроме 2, не простые

    int sqrt_n = sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

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