#include<iostream>
#include<vector>
using namespace std;
class Area{
    public:
    virtual void area()
    {
        clog<<"area is calculating \n";
    }
};
class circle: public Area{
    public:
    void area()override 
    {
        cout<<"area of the circle is calulated "<<endl;

    }
};
class rectangle :public Area
{
    public:
    void area()
    {
        cout<<"the area of th rectangle is calculated :"<<endl;
    }
};
int main()
{
vector<Area*> a;
a.push_back(new circle());
a.push_back(new rectangle());
for(int i=0;i<a.size();i++)
{
    a[i]->area();
}
for(int i=0;i<a.size();i++)
{
    delete a[i];
}
return 0;
}