#include <iostream>
#include <cstdlib>
using namespace std;

#define Size 5

class stack {
private:
    int mystack[Size];
    int top;

public:
    void initial() {
        top = -1;
    }

    void push(int data) {
        if (top == Size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            mystack[++top] = data;
            cout << data << " is pushed successfully" << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            cout << mystack[top--] << " is popped successfully" << endl;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Topmost element: " << mystack[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << mystack[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    stack s;
    s.initial();
    int choice, data;

    while (true) {
        cout << "Enter 1 for push" << endl;
        cout << "Enter 2 for pop" << endl;
        cout << "Enter 3 for peek" << endl;
        cout << "Enter 4 for display" << endl;
        cout << "Enter 5 for exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data: ";
                cin >> data;
                s.push(data);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                exit(EXIT_SUCCESS);
                break;

            default:
                cout << "Invalid option" << endl;
        }
    }

    return 0;
}
