#include<iostream>
// using namespace std;
// class Student
// {
//     private:
//         string name;
//         int gpa;
//     public:
//         Student()
//         {
//             cout<<"enter the name of the student : "<<endl;
//             getline(cin,name);
//             cout<<"enter the gpa:"<<endl;
//             cin>>gpa;
//             cin.ignore();
//         }
//         void display()
//         {
//             cout<<"the name of the student is :"<<name<<endl;
//             if(gpa>3.6)
//             {
//                 cout<<"excellent :"<<endl;

//             }
//            else  if(gpa>3)
//            {
//             cout<<"Average:"<<endl;
//            }
//            else
//            {
//             cout<<"Poor:"<<endl;

//            }
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
//         cin.ignore();
//         Student *s=NULL;
//         s= new Student[n];
//         for(i=0;i<n;i++)
//         {
//             s[i].display();
//         }

//     }