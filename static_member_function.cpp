#include<iostream>
#define PI 3.14
using namespace std;
class AREAA 
{
    private:
      static float area;
      static float radius;
    public:
     AREAA ()
     {
        cout<<"constructor:"<<endl<<endl;
        cout <<"enter the radius :"<<endl;
        cin>>radius;
        area= PI*radius*radius;
        

     }
    static void display()
    {
        cout<<"enter the radius of the circle :";
        cin>>radius;
        area=PI*radius*radius;
       
    }
    void diplay()
    {
         cout<<"the area of the circle is :"<<area<<endl;
    }
};
float AREAA:: area=0;
float AREAA :: radius=0;

int main ()
{
  AREAA a1, b1,c1;
 AREAA::display();
 a1.diplay();
 b1.diplay();
c1.diplay();
}