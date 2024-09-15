#include <cmath>
#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n >= 2) {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        return isPrime;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    cout << (checkPrime(a) ? "YES" : "NO") << endl;
    return 0;
}
