#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 1, 9};
    int max_val = arr[0];
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    
    cout << "Maximum element: " << max_val << endl;
    
    return 0;
}
