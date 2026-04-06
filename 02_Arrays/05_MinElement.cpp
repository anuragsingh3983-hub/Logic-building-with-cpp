#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 9};
    int min_val = arr[0];
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    
    cout << "Minimum element: " << min_val << endl;
    
    return 0;
}
