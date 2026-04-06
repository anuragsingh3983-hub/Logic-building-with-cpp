#include <iostream>
using namespace std;

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "Subtraction: " << subtract(10, 5) << endl;
    cout << "Multiplication: " << multiply(4, 6) << endl;
    cout << "Division: " << divide(20, 4) << endl;
    return 0;
}
