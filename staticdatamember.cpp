//static data member 
#include<iostream>
using namespace std;

class calculator
{
    private:
    int sum,multiply;
    static int a;//static data member declaration 
    static int b;
    public:
    calculator()
    {
        cout<<"enter the calue of a:"<<endl;
        cin>>a;
        cout<<"enter the value of b:"<<endl;
        cin>>b;
    }
    void doit()
    {
        sum=a+b;
        multiply=a*b;
        
    }
    void show()
    {
        cout<<"the sum of num is :"<<sum;
        cout<<endl<<"the multiply of the number is :"<<multiply;
    }

};
int calculator::a=0;//defination
int calculator :: b=0;
int main ()
{
    calculator c1,c2,c3;
    c1.doit();
    c2.doit();
    c3.doit();
    cout<<"by object a :"<<endl;
    c1.show();
    cout<<endl<<"by object b: "<<endl;
    c2.show();
    cout<<endl<<"by object c :"<<endl;
    c3.show();

}