#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
private:
    int x;
public:
    A() {
        cout << "Enter the number: ";
        cin >> x;
    }
    friend class B; // Declare class B as a friend of class A
};

class B {
private:
    int y;
public:
    B() {
        cout << "Enter another number: ";
        cin >> y;
    }
    void display(A& a) { // Accept A by reference
        int add = y + a.x;
        cout << "The sum of the numbers is: " << add << endl;
    }
};

int main() {
    A a;
    B b;
    b.display(a); // Pass A object by reference
    return 0;
}
