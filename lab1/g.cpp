#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    bool isPrime = true;
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        };
    }
    return isPrime;
}

int main() {
    int n, primeIndex = 0, superPrimeIndex = 0, counter = 1;
    cin >> n;
    while (superPrimeIndex != n) {
        counter++;
        if (isPrime(counter)) {
            primeIndex++;
            if (isPrime(primeIndex)) {
                superPrimeIndex++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
