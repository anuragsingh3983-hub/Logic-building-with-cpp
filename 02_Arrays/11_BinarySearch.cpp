#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 7, 9};
    int key;
    
    cout << "Enter number to search: ";
    cin >> key;
    
    int low = 0, high = 4, found = -1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found != -1) {
        cout << "Element found at index " << found << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    
    return 0;
}
