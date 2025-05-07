#include<iostream>
using namespace std;
class multiply
{
    private:
    int a,b;
    public:
    multiply(int x, int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"the  multiply 5
        of "<<a<<" and "<<b<<" is "<<a*b<<endl;

    }
};
int main ()
{
    int x,y;
    cout<<"enter any two numbwers:"<<endl;
    cin>>x>>y;
    multiply as(x,y);
    as.display();
    return 0;

}