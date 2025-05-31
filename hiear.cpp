#include<iostream>
using namespace std;
class Employee
{
    protected:
    
    string name ;
    public:
    void input()
    {
        cout<<"enter a name :"<<endl;
        cin>>name;

    }
};
class manager: public Employee
{
    protected:
    int tasks;
    public:

    void input()
    {
        Employee::input();
        cout<<"enter a task :"<<endl;
        cin>>tasks;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"tasks : "<<tasks<<endl;

    }
};
class Teacher : public Employee
{
    protected :
    string sub;
    public :
    void input()
    {
        Employee::input();
        cout<<"enter a subject :"<<endl;
        cin >>sub;

    }
    void display ()
    {
        
        cout<<"Name : "<<name<<endl;
        cout<<"sub :"<<sub<<endl;

    }
};
int main ()
{
    Teacher t;
    manager m;
    m.input();
    m.display();
    t.input();
    t.display();
}