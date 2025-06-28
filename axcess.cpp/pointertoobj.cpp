#include<iostream>

using namespace std;
class paint
{
    public:
    virtual void draw()
    {
        clog<<"drawing paint";
    }
};
class line:public paint
{
    public:
    void draw()
     {
        cout<<"draw a line" ;

     }
};
class circle:public paint
{
public:
void draw()
{
cout<<"draw a  circle";
}

};
int main()
{
   
    paint *p1[]={new paint(),new line(),new circle()};
    int n=sizeof(p1)/sizeof(p1[0]);
    for(int i=0;i<n;i++)
    {
        p1[i]->draw();
        cout<<"\n";
        delete p1[i];
    }
}
