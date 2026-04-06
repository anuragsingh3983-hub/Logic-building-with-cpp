#include <iostream>
using namespace std;

int main() {
    int a = 5;
    
    cout << "a = " << a << endl;
    cout << "Pre-increment ++a: " << ++a << endl;
    cout << "Post-increment a++: " << a++ << endl;
    cout << "a after post-increment: " << a << endl;
    cout << "Pre-decrement --a: " << --a << endl;
    cout << "Post-decrement a--: " << a-- << endl;
    cout << "a after post-decrement: " << a << endl;
    
    return 0;
}
