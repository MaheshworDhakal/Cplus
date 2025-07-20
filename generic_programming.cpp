// #include<iostream>
// using namespace std;
// template <typename T>
// T SWAP(T &x,T &y)
// {
//     T z;
//     z=x;
//     x=y;
//     y=z;
// }
// int main()
// {
//     int x=56;
//     int y=67;
//     cout<<"before swaping X:"<<x<<"  y : "<<y<<endl;
//     SWAP(x,y);
//     cout<<"after swaping  x: "<<x<<"   y : "<<y <<endl;
// }

//template function overloading 
// #include<iostream>
// using namespace std;
// template <typename t>
// t add(t a,t b)
// {
//     return a+b;
// }
// template <typename t, typename u>
// u add (t a, u b)
// {
//     return a+b;
// }
// int main()
// {
//     cout<<"the sum of two integer is :"<<add(5,6)<<endl;
//     cout<<"the sum of two float value is :"<<add(5.6f,5.2f)<<endl;
//     cout<<"the sum of int and float is :"<<add(4,5.5f)<<endl;
//     cout<<"the sum of float and int is :"<<add(5.5f,4)<<endl;
// }


//template class
#include<iostream>
using namespace std;
 template <class T>
 class student
 {
    private:
    T num;
    public:
    student(T num)
    {
        this->num=num;
    }
    T getnum()
    {
        return num;
    }
    
 };
 int main()
 {
    student <int> obj1(10);
    student<float> obj2(30.5f);
    student <string> obj3 ("maheshwor");
    cout<<"the value of obj1 is :"<<obj1.getnum()<<endl;
    cout<<"the value of obj 2 is :"<<obj2.getnum()<<endl;
    cout<<"the vlaue of th obj 3 is :"<<obj3.getnum()<<endl;
 }