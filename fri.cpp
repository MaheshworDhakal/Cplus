//wap to add two private members of two a class and return the result using friend function 
#include<iostream>
 using namespace std; 
 class one; //forward declaration
 class two
 {
    private :
    int num1;
    public:
    two()
    {
        cout<<"enter the value of num1"<<endl;
        cin>>num1;

    }
    friend int  add(two ,one);  

 };
 class one 
 {
    private:
    int num1;
    public:
    one ()
    {
        cout<<"enter the number"<<endl;
        cin>>num1;
    }
    friend int add (two, one);
 };
 int add (two c1, one d1)
 {
    int sum =c1.num1+d1.num1;
    return sum;
 }
 int main ()
 {
    one c1;
    two c2;
    int sum =add(c2,c1);
    cout<<"the sum of the number is "<<sum<<endl;
 }
