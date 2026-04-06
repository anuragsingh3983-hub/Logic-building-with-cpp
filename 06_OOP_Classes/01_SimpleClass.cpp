#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float gpa;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Raj";
    s1.roll = 101;
    s1.gpa = 8.5;
    s1.display();
    return 0;
}
