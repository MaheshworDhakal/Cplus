#include<iostream>

using namespace std;
class student
{
    private:
    int size;
    string name;
    public:
    student()
    {
        cout<<"enter your name:"<<endl;
    cin>>name;
    }
    void display()
    {
        cout<<"the name of student is :"<<name<<endl;

    }
};
int main ()
{
    student *s=NULL;
    s=new student[3];
    s[0].display();//remember that the starting index of array is 0
    s[1].display();
    s[2].display();
    delete [] s;
}

