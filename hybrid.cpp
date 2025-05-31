#include<iostream>
 using namespace std;
 class person
 {
    protected:
    string name;
    public:
    void input()
    {
        cout<<"enter a name :"<<endl;
        cin>>name;
    }
    void display ()
    {
        cout<<"name : "<<name<<endl;
    }
 };
 class Exam 
{
    protected:
     int mark[5];
     public:
     void input ()
     {
        for(int i=0;i<5;i++)
        {
            cout<<"enter the marks of "<<i<<" subject :"<<endl;
            cin >> mark[i];

        }
    
     }
     void display ()
     {
        for(int i=0;i<5;i++)
        {
            cout<<mark[i]<<"\t"<<endl;
        }
     }
    };
    class student:public person 
    {
         protected :
         int id;
         public:
         void input()
         {
            cout<<"enter a id :"<<endl;
            cin>>id;

         }
         void display()
         {
             cout <<"id :"<<id<<endl;
         }
    };
    class Result:public student,public Exam
    {
        protected:
        int total;
        float ptr;
        public :
        void input()
        {
            person::input();
            student::input();
            Exam::input();
            for(int i=0;i<5;i++)
            {
                total+=mark[i];

            }
            ptr=(float)total/5;
        }
        void display()
        {
        cin.ignore();   
         person::display();
            student::display();
            Exam::display();
            cout<<" the percent is : "<<ptr;
        }
    };
    int main ()
    {
        Result r;
        r.input();
        r.display();
    }