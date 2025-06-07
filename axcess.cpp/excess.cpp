
    #include <iostream>
    using namespace std;
    class Employee {
    protected:
        string name;
        int age;
        string address;
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
    };
    class Manager : private Employee {
    public:
    
    void setdata()
    {
        name="Maheshwor Dhakal";
        age=20;
        address="Sundarbazar, Lamjung";
    }
        void showDetails() {
            display();
        }
    };
    int main() {
        Manager mgr;
        mgr.setdata();
        mgr.showDetails();
        return 0;
    }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 6. Protected Inheritance: Accessing Private Members via Getter Functions
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int age;
//     string address;

// public:
//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     string getName() { return name; }
//     int getAge() { return age; }
//     string getAddress() { return address; }

//     void display() {
//         cout << "Name: " << getName() << endl;
//         cout << "Age: " << getAge() << endl;
//         cout << "Address: " << getAddress() << endl;
//     }
// };

// class Manager : protected Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 7. Private



// Sources
// You said:
// write what when we excess by this each code

// ChatGPT said:
// Apologies for the earlier confusion. Let's now create a comprehensive set of 9 C++ programs, demonstrating how to access base class members in a derived class using different access specifiers. Each program will use a base class Employee with data members name, age, and address, and a member function display(). We'll then create a derived class Manager with public, protected, and private inheritance, and access the base class members accordingly.

// 1. Public Inheritance: Accessing Public Members
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// public:
//     string name;
//     int age;
//     string address;

//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 2. Public Inheritance: Accessing Protected Members
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// protected:
//     string name;
//     int age;
//     string address;

// public:
//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 3. Public Inheritance: Accessing Private Members via Getter Functions
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int age;
//     string address;

// public:
//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     string getName() { return name; }
//     int getAge() { return age; }
//     string getAddress() { return address; }

//     void display() {
//         cout << "Name: " << getName() << endl;
//         cout << "Age: " << getAge() << endl;
//         cout << "Address: " << getAddress() << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 4. Protected Inheritance: Accessing Public Members
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// public:
//     string name;
//     int age;
//     string address;

//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// class Manager : protected Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 5. Protected Inheritance: Accessing Protected Members
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// protected:
//     string name;
//     int age;
//     string address;

// public:
//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// class Manager : protected Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung
// 6. Protected Inheritance: Accessing Private Members via Getter Functions
// Program:

// cpp
// Copy
// Edit
// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int age;
//     string address;

// public:
//     Employee(string n, int a, string addr) : name(n), age(a), address(addr) {}

//     string getName() { return name; }
//     int getAge() { return age; }
//     string getAddress() { return address; }

//     void display() {
//         cout << "Name: " << getName() << endl;
//         cout << "Age: " << getAge() << endl;
//         cout << "Address: " << getAddress() << endl;
//     }
// };

// class Manager : protected Employee {
// public:
//     Manager(string n, int a, string addr) : Employee(n, a, addr) {}

//     void showDetails() {
//         display();
//     }
// };

// int main() {
//     Manager mgr("Maheshwor Dhakal", 20, "Sundarbazar, Lamjung");
//     mgr.showDetails();
//     return 0;
// }
// Output:

// makefile
// Copy
// Edit
// Name: Maheshwor Dhakal
// Age: 20
// Address: Sundarbazar, Lamjung