#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    string result = (age >= 18) ? "Adult" : "Minor";
    cout << result << endl;
    
    return 0;
}
