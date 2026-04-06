#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    cout << "a > 3 && b > 8: " << (a > 3 && b > 8) << endl;
    cout << "a > 10 || b > 8: " << (a > 10 || b > 8) << endl;
    cout << "!(a > 10): " << !(a > 10) << endl;
    
    return 0;
}
