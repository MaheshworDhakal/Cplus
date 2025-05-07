#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b;
    public:
     sum()
    {
        a=10;
        b=11;

    }
    void display()
    {
        cout<<"the sum of "<<a<<" and  "<<b<<" is "<<a+b<<endl;
    }
};
int main ()
{
    sum aa;
    aa.display();
    return 0;
}