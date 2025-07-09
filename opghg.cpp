#include<iostream>
using namespace std;
class array
{
private:
    int arr [5];
public:
    void getdata()
    {
        cout<<"enter the element of array:"<<endl;
        for (int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"the element of array after substraction is :"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    array operator -(array a)
    {
        array temp;
        for(int i=0;i<5;i++)
        {
            temp.arr[i]=arr[i]+a.arr[i];
        }
        return temp;
    }
};
int main ()
{
    array a1,a2;
    a1.getdata();
    a2.getdata();
    array a3=a1-a2;
    a3.display();
}