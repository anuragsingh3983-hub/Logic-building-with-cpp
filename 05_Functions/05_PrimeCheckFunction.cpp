#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Is 7 prime? " << isPrime(7) << endl;
    cout << "Is 10 prime? " << isPrime(10) << endl;
    return 0;
}
