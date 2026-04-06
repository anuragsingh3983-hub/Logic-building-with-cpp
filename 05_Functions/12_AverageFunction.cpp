#include <iostream>
using namespace std;

int average(int a, int b) {
    return (a + b) / 2;
}

int main() {
    cout << "Average of 10 and 20: " << average(10, 20) << endl;
    cout << "Average of 5 and 15: " << average(5, 15) << endl;
    return 0;
}
