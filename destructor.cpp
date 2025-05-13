#include<iostream>
int count=0;
using namespace std;
class demo 
{

public:
demo()
{
    count=count+1;
    cout<<" object created :"<<count<<endl;
}
~demo()
{
    cout<<"object deleted :"<<count<<endl;
    count=count-1;
}

};
int main ()
{
    demo c1,c2,c3,c4,c5,c6,c7;
    return 0;
}