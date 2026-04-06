#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 9};
    int count_even = 0, count_odd = 0;
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }
    
    cout << "Even numbers: " << count_even << endl;
    cout << "Odd numbers: " << count_odd << endl;
    
    return 0;
}
