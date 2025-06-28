#include<iostream>
#include<vector>
using namespace std;
class shape
{

    public:
    virtual void shapee()=0;
};
class line:public shape{
    public:
    void shapee (){
        cout<<"the line is drawn :"<<endl;

    }

};
class circle:public shape{
    public:
    void shapee()
    {
        cout<<"the circle is drawn :"<<endl;
    }
};
int main()
{
    vector<shape*>s;
    s.push_back(new line);
    s.push_back(new circle);
    s[0]->shapee();
    s[1]->shapee();
    delete s[1];
    delete s[0];


}
