#include <iostream>
using namespace std;
class Employee {
private:
 string name;
protected:
    string address;
public:
    int age;
    void setname()
    {
        name="Pappu Kumar Yadav "; 
    }

    void display() {
        cout << "Name: " << name<<endl << "address:" <<address<<endl<<" Age: " << age << endl;
    }
};
class Manager : private Employee {
public:
    void setData() {
        setname();
        address="Kathmandu";
        age=20;
    }
    void showdata()
    {
    display();
    }
};
int main() {
    Manager mgr;
    mgr.setData();
    
    mgr.showdata();
    return 0;
}
