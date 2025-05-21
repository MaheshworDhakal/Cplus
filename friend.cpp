#include<iostream>
#define PI 3.14
using namespace std; 
class circle 
{
    private:
    float radius;

    public:
    void getdetails()
    {
        cout<<"enter the radius "<<endl;
        cin>>radius ;

        
    }
    friend void  area(circle);

};
void area (circle cir)
{
    float Area=PI *cir.radius *cir.radius;
    cout <<"area:"<<Area <<endl;

};
int main ()
{
     circle c1;
     c1.getdetails();
     area(c1);
}
