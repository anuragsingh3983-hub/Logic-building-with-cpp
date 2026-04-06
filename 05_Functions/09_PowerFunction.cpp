#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 0;
    
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    cout << "2^5 = " << power(2, 5) << endl;
    cout << "3^3 = " << power(3, 3) << endl;
    return 0;
}
