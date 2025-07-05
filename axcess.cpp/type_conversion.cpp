// 


//my method
#include<iostream>
using namespace std;
class Distance
{
    private:
    int m,km;
    public:
    Distance()
    {
        cout<<"enter the value in meter the is to be convert:"<<endl;
        cin>>m;
    

    }
    void display()
    {
        cout<<"the value in the meter is :"<<m<<endl;

    }
    int give(int kilo)
    {
        int kms=kilo;
        return kms;
    }
    operator int()
    {
        km=m/1000;
        return give(km);
    }
};
int main()
{
    int km;
    Distance d;
    d.display();
    km=d;
    cout<<"the value of the distance in in km:"<<km<<"km"<<endl;
}