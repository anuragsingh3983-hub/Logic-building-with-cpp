#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 8, 2, 9};
    int target = 2;
    int count = 0;
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    cout << "Element " << target << " appears " << count << " times" << endl;
    
    return 0;
}
