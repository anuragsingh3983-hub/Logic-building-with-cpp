#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int average = 0;
    
    for (int i = 0; i < 5; i++) {
        average += arr[i];
    }
    
    average = average / 5;
    cout << "Average: " << average << endl;
    
    return 0;
}
