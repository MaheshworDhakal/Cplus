#include<iostream>
using namespace std;
int sumn(int n)
{
    if(n==1)
    {
        return n;
    }
    else
    {
        return n+sumn(n-1);
    }
}
int main ()
{
    int n,sum;
    cout<<"enter the term:"<<endl;
    cin>>n;
    sum=sumn(n);
    cout<<"the sum of first"<<n<<" natural number is "<<sum<<endl;
    return 0;
}