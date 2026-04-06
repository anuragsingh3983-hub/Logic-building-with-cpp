#include <iostream>
using namespace std;

int maxOfArray(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[5] = {3, 7, 2, 9, 1};
    cout << "Maximum: " << maxOfArray(arr, 5) << endl;
    return 0;
}
