// #include<iostream>
// using namespace std;
// class complex
// {
//     int real,imag;
//     public:
//     complex(){

//         //requires default constructor because obj 3 is default
//     }
//     complex(int real,int imag)
//     {
//         this->real=real;
//         this->imag=imag;
//     }
//     void display()
//     {
//         cout<<real<<"+i"<<imag;

//     }
//     complex operator +(complex &c)
//     {
//         complex ans;
//         ans.real=real+c.real;
//         ans.imag=imag +c.imag;
//         return ans;
//     }
// };
// int main ()
// {
//     complex c1(3,4);
//     complex c2(5,2);
//     complex c3=c1+c2;
//     c3.display();
    
// }



//program to overload unary "-" operator without return type 
// #include<iostream>
// using namespace std;
// class convert
// {
//     private:
//     int x, y,z;


// public:

// convert(int a, int b ,int c)
// {
//     x=a;
//     y=b;
//     z=c;
// }
// void operator -()
// {
//     x=-x;
//     y=-y;
//     z=-z;
// }
// void display()
// {
//     cout<<"x:"<<x<<"\t"<<"y:"<<y<<"\t"<<"z:"<<z<<endl;

// }
// };
// int main()
// {
//     convert c( 2,4,-9);
//     c.display();
//     -c;
//     c.display();
// }

//with return type

// #include<iostream>
// using namespace std;
// class convert{
//     private:
//     int x,y,z;
//     public:
//     convert(int a, int b, int c)
//     {
//         x=a;
//         y=b;
//         z=c;
    
//     }
//     convert operator -()
//     {
//         return  convert(-x,-y,-z);
//     }
//     void display()
//     {
//          cout<<"x:"<<x<<"\t"<<"y:"<<y<<"\t"<<"z:"<<z<<endl;
    
//     }
// };
// int main()
// {
//     convert c(2,4,-3);
//     convert c1=-c;
//     cout<<"the modified value:\n";
//     c1.display();
// }

// #include<iostream>
// using namespace std;

// class convert{
//     private:
//     int x,y,z;
//     public:
//     convert ()

// {
//     // requires the default constructor  if it is return type and constructor is called not  directly   ccompare with above program 
// }    convert(int a, int b, int c)
//     {
//         x=a;
//         y=b;
//         z=c;
    
//     }
//     convert operator -()
//     {
//         convert temp;
//         temp.x=-x;
//         temp.y=-y;
//         temp.z=-z;
//         return temp;
//     }
//     void display()
//     {
//          cout<<"x:"<<x<<"\t"<<"y:"<<y<<"\t"<<"z:"<<z<<endl;
    
//     }
// };
// int main()
// {
//     convert c(2,4,-3);
//     convert c1=-c;
//     cout<<"the modified value:\n";
//     c1.display();
// }

// in using default constructor without return type is smae but with retrun tye use temp concept
