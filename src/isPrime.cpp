#include <cmath>
#include "isPrime.h"

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
