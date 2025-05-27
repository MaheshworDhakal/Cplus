#include<iostream>
using namespace std;
class base
{
    protected:
    int num=10;

};
class base2
{
    protected:
    int num=30;
};
class derived :public base , public base2
{
    public:
    int sum;
    void display()
    {
        sum =base::num+base2::num; //to remove the ambiguity;
        cout<<"the sum is "<<sum<<endl;
    }
};
int main()
{
    derived d;
    d.display();
}