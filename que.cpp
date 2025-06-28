#include<iostream>
#include<vector>
using namespace std;
class figure
{
    protected:
    int dim1,dim2;
    public:
    figure()
    {
        cout<<"enter the value of dim1 and dim2"<<endl;
        cin>>dim1>>dim2;

    }
    virtual void area()
    {};


};
class traingle:public figure
{
    public:
    void area()
    {
        cout<<"the are of the traingle is :"<<0.5*dim1*dim2;
    }
};
class rectangle: public figure{
    public:
    void area()
    {
        cout<<"the area of the rectangle is "<<dim1*dim2;
    }
};
int main()
{
    cout<<"enter the value of traingle"<<endl;
    traingle t;
    cout<<"\n enter the value for rectangle"<<endl;
    rectangle r;
    vector<figure*>f;
    f.push_back(&t);
    f.push_back(&r);
    for(int i=0;i<2;i++)
    {
        f[i]->area();
    }
}