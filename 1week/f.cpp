#include <deque>
#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int n) {
  bool isPrime = true;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int main() {
  int n;
  int primesCounter = 0;
  int superPrimesCounter = 0;
  int counter = 2;
  cin >> n;
  while (n != superPrimesCounter) {
    if (checkPrime(counter)) {
      primesCounter++;
      if (checkPrime(primesCounter)) {
        superPrimesCounter++;
      }
    }
    if (superPrimesCounter == n) {
      cout << counter << endl;
    }
    counter++;
  }
  return 0;
}
