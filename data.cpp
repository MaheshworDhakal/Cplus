// //basic to basic conversion 
// #include<iostream>
// using namespace std;
// float main()
// {
//     float x=100;
//     float y;
//     y = (float)100/12;//convert the 100 to 1oo.0f so the desired result is obtained 
//     //y=float(100/8) convert the integer result into float so the result isnot obtianed 8.0f
//     char c=char(y);
//     cout<<"the value of y is :"<<y <<endl;
//     cout<<"the value of the character is "<<c<<endl;
// }


// userdefined to  basic 
// #include<iostream>
// using namespace std;
// class convert{
//     private:
//     float  m;
//     float km;
//     public:
//     convert()
//     {

//         cout<<"enter the value in meter :"<<endl;
//         cin>>m;
//         km=0.0f;
//     }
//     void display()
//     {
//         cout<<"the value of distance in meter :"<<m<<endl;
//     }
//     operator float ()
//     {
//         km= (float)m/1000;
//         return km;
//     }
// };
// float main ()
// {
//     float km;
//     convert m;
//     m.display();
//     km=m;
//     cout<<"the value of the km is :"<<km <<endl;

// }



//userdefined to user defined 
//conversion routine in source class 
// #include<iostream>
// using namespace std;
// class Km{
//     private:
//     float km;
//     public:
//     Km()
//     {

//     }
//     Km(float kilo)
//     {
//         km =kilo;
//     }
//     void display()
//     {
//         cout<<"the value of distace in km is :"<<km;
//     }
// };
// class M{
//     private:
//     int m;
//     public:
//     M()
//     {
//         cout<<"enter the vlaue in meter:"<<endl;
//         cin>>m;
//     }
//     operator Km()
//     {
//         float km=(float)m/1000;
//         return Km(km);
//     }
//     void display()
//     {
//         cout<<"the vlaue in meter is "<<m<<endl;
//     }
// };
// int main()
// {
//  M m;
//  m.display();
//  Km km;
//  km=m;
//  km.display();


// }

#include<iostream>
using namespace std;
 class M{
    private:
    int m;
    public:
    M()
    {
        cout<<"enter the vlaue in meter:"<<endl;
        cin>>m;
    }
  
    void display()
    {
        cout<<"the vlaue in meter is "<<m<<endl;
    }
    int get()
    {
        return m;
    }
};
class Km
{
    private:
     float km;
     public:
     Km()
     {

     }
     Km(M me)
     {
        int m;
        m=me.get();
        km=(float)m/1000;
     }
     void display()
     {
        cout<<"the vlaue of distance in KM is :"<<km<<endl;
     }
};
int main()
{
    M m;
    m.display();
    Km km;
    km=m;
    km.display();
}