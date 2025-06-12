#include<iostream>
using namespace std;
class student
{
    protected:
        string name;
    public:
    student()
    {
        cout<<"enter the name :"<<endl;
        getline(cin,name);

    }
    void  display()
    {
        cout<<"the name of the student is :"<<name<<endl;

    }
};
int main()
{
    int n,i;
    cout<<"enter the number of student: "<<endl;
    cin>>n;
    cin.ignore();
    student *s=NULL;
    s=new student[n];
    for(i=0;i<n;i++)
    {
        s[i].display(); //not use ->You should use s[i]->display() when you have an array of pointers to dynamically allocated objects.

    }
    delete [] s;
    return 0;

}
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

// int main() {
//     int n = 3; // Number of students
//     Student* s[3]; // Array of 3 pointers to Student objects

//     // Dynamically allocate memory for each Student object
//     for (int i = 0; i < n; i++) {
//         s[i] = new Student;
//     }

//     // Display information for each student
//     for (int i = 0; i < n; i++) {
//         s[i]->display();
//     }

//     // Deallocate memory for each Student object
//     for (int i = 0; i < n; i++) {
//         delete s[i];
//     }

//     return 0;
// }
