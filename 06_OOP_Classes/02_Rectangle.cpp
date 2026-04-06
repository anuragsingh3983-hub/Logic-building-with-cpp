#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, width;
    
    float area() {
        return length * width;
    }
    
    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;
    r.length = 10;
    r.width = 5;
    
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
