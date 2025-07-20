
//using class 
#include <iostream>
using namespace std;
class IntHolder {
    int* ptr;
public:
    IntHolder(int value) {       
       // ptr = new int{value};     dynamically allocate integer and initialize also
       ptr=new int;
       *ptr =value;   
    }
    void display() const {
        cout << "Stored value: " << *ptr << endl;
    }
    ~IntHolder() {              // cleanup
        delete ptr;
    }
};

int main() {
    IntHolder h(42);
    h.display();
    return 0;
}

//without using class

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *x=new int ;
//     *x=42;
//     cout<<"Stored value  : "<<*x<<endl;
//     delete x;
// }

    // #include<iostream>
    // using namespace std;
    // class Sum
    // {
    //     private:
    //     int *arr;
    //     int Size;
    //     public:
    //     Sum(int size)
    //     {
    //         Size=size;
    //         arr=new int[size];

    //     }
    //     void input()
    //     {
    //         int i;
    //         for(i=0;i<Size;i++)
    //         {
    //             cout<<"enter the "<<i+1<<" element:"<<endl;
    //             cin>>arr[i];

    //         }
    //     }
    //         void display()
    //         {
    //             int  sum=0,i;
    //             for(i=0;i<Size;i++)
    //             {
    //             sum=sum+arr[i]; 
    //             }
    //             cout<<"the sum of the element of the array is : "<<sum <<endl;
    //         }
    //         ~ Sum()
    //         {
    //             delete []arr;
    //             cout<<"memory deallocated successfully :"<<endl;
    //         }
        

    // };
    // int main()
    // {
    // int size;
    // cout<<"enter the size of an array:"<<endl;
    // cin>>size;
    // Sum s(size);
    // s.input();
    // s.display();
    // }


    // #include<iostream>
    // using namespace std;
    // class Student
    // {
    //     private:
    //         string name;
    //         int gpa;
    //     public:
    //         Student()
    //         {
    //             cin.ignore();
    //             cout<<"enter the name of the student : "<<endl;
    //             getline(cin,name);
    //             cout<<"enter the gpa:"<<endl;
    //             cin>>gpa;
                
    //         }
    //         void display()
    //         {
    //             cout<<"the name of the student is :"<<name<<endl;
    //             if(gpa>3.6)
    //             {
    //                 cout<<"excellent :"<<endl;

    //             }
    //         else  if(gpa>3)
    //         {
    //             cout<<"Average:"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"Poor:"<<endl;

    //         }
    //         }
    //         ~Student()
    //         {
    //             cout<<"destructor called :"<<endl;
    //         }
        
    //     };
    //     int main ()
    //     {
    //         int n,i;
    //         cout<<"enter the number of the student:"<<endl;
    //         cin>>n;

    //         Student *s=NULL;
    //         s= new Student[n];
    //         for(i=0;i<n;i++)
    //         {
    //             s[i].display();
    //         }

    //     }


    

    //     // #include<iostream>
    //     // using namespace std;
    //     // class Employee
    //     // {
    //     //     private:
    //     //         string *name;
    //     //         int id,salary;
    //     //     public:
    //     //     Employee()
    //     //     {
    //     //         name=new string ;  
    //     //     }
    //     //     void input()
    //     //     {
    //     //         cout<<"enter the name of the employee:"<<endl;
    //     //         getline(cin,*name);
    //     //         cout<<"enter the employee id and salary:"<<endl;
    //     //         cin>>id;
    //     //         cin>>salary;
    //     //         cin.ignore();
    //     //     }
    //     //     void display()
    //     //     {
    //     //         cout<<"the name of the employee : "<<*name;
    //     //         cout<<"ID : "<<id<<endl;
    //     //         cout<<"Salary: "<<salary<<endl;
    //     //     }
    //     //     ~Employee()
    //     //     {
    //     //         delete name;
    //     //         cout<<"memory delallcoted successfully:"<<endl;
    //     //     }
    //     // };
    //     // int main ()
    //     // {
    //     //     int i, n;
    //     //     cout<<"enter the number of the Employee:"<<endl;
    //     //     cin>>n;
    //     //     cin.ignore();
    //     //     Employee e[n];
    //     //     for(i=0;i<n;i++)
    //     //     {
    //     //     e[i].input();  
    //     //     }
    //     //     for(i=0;i<n;i++)
    //     //     {
    //     //         e[i].display();
    //     //     }

    //     // }


#include<iostream>
using namespace std;
class one
{
    private:
    int * x;
    public:
    one(int value)
    {
        x= new int;
        *x=value;
    }
    void display()
    {
        cout<<"the value of the x is :"<<*x<<endl;
    }
    ~ one()
    {
        cout<<"destructor called :"<<endl;
        delete x;
    }

};
int main()
{
    one o(10);
    o.display();
}