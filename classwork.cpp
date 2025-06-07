#include<iostream>
using namespace std;
 class alpha
 {
    protected:
    int x;
    public:
    alpha(int x)
    {alpha::x=x;}
    void showa()
    {
        cout<<"the value of the x is :"<<x<<endl;
    }
 };
 class beta :protected alpha
 {
    protected:
    int y,z;
    public:
    beta(int x,int y,int z):alpha(x)
    {
        beta::y=y;
        beta::z=z;

    }
    void showb()
    {
        cout<<"the value of the  y:"<<y<<endl;
        cout<<"the value of the z:"<<z<<endl;
    }

 };
 class gama:protected beta
 {
    protected:
    int m,n;
    public:
    gama(int x,int y,int z,int m,int n):beta(x,y,z)
    {
        gama::m=m;
        gama::n=n;
    }
    void showg()
    {
        showa();
        showb();
        cout<<"the value of m is :"<<m<<endl;
        cout<<"the value of n is :"<<n<<endl;
    }
 };
 int main()
 {
    gama g(1,2,3,4,5);
    g.showg();
 }