#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int temp = num;
    int reverse = 0;
    
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    
    cout << "Reverse: " << reverse << endl;
    return 0;
}
