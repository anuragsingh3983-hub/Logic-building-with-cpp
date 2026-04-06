#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    int temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    
    cout << "Number of digits: " << count << endl;
    return 0;
}
