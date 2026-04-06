#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "int + int: " << add(5, 3) << endl;
    cout << "double + double: " << add(5.5, 3.3) << endl;
    cout << "int + int + int: " << add(5, 3, 2) << endl;
    return 0;
}
