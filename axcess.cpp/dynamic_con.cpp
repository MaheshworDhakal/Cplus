#include<iostream>
using namespace std;
class calculator
{
    private:
    int *array;
    int size;
    int sum;
    int i;
    public:
    calculator()

    {
        cout<<"ente the size :"<<endl;
        cin>>size;
        array= new int[size];
        //remember int not calculator
        i=0;
        sum=0;
        for(i=0;i<size;i++)
        {
            cout<<"enter the :"<<i+1<<" element"<<endl;
            cin>>array[i];
            

        }
        cout<<"constructor callled:"<<endl;
    }
    void dosum()
    {
        for(i=0;i<size;i++)
        {
            sum=sum+array[i];
        }
         cout<<"the sum is :"<<sum<<endl;
    }
    ~ calculator()

    {
        delete [] array;
        cout<<"distructor called"<<endl;
    }
    
};
int main ()
{
    calculator
 c;
    c.dosum();
    return 0;
}