#include<iostream>
using namespace std;
class box
{
    private:
    int len,bre,hei;
    int volume;
    public:
    box(int l ,int b, int h)
    {
        len =l;
        bre=b;
        hei=h;
    }
    box(box &c1)
    {
        len=c1.len;
        bre=c1.bre;
        hei=c1.hei;

    }
    void display()
    {
        volume=len*bre*hei;
        cout<<"the volume of box is "<<volume<<endl;
    }
};
int main ()
{
  int l,b,h;
  cout<<"enter the length breath and height of box ";
  cin>>l>>b>>h;
  box  b1(l,b,h);
  box b2(b1);
  b1.display();
  b2.display();

}