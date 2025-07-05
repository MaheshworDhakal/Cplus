#include<iostream>
using namespace std;
class convert
 {
    private:
    int x;
    public:
    convert()
    {

    }
    convert(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<"the value of the X is :"<<x<<endl;

    }
    convert operator ++(int)
    {
        convert temp;
        temp.x=x++;
        return temp;

    }
     convert operator ++()
    {
        convert temp;
        temp.x=++x;
        return temp;

    }


};
int main()
{
    convert c(5);
    cout<<"Original"<<endl;
    c.display();
    convert c1=c++;
    cout<<"after postfix output:"<<endl;
    c1.display();
    cout<<"original value become:"<<endl;
    c.display();
    convert c2=++c;
    cout<<"after prefix output:"<<endl;
    c2.display();
    cout<<"original become:"<<endl;
    c.display();
    return 0;
}