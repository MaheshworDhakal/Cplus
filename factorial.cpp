#include<iostream>
using namespace std;
long fact (int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else{
    return n*fact(n-1);
    }

}
int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    cout<<"the factorial of : "<<n<<" is "<<fact(n);
}