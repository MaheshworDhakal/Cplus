// // #include<iostream>
// // using namespace std;
// // class engineer
// // {
// //     protected:
// //     string  name;
// //     string  salary;
// //     public:
// //     void dispaly()
// //     {
// //         cout<<"enter your :name"<<endl;
// //         cin>>name;
// //         cout<<"enter your salary:"<<endl;
// //         cin>>salary;

// //     }
// //     void go()
// //     {
// //         cout <<"the name is :"<<name <<endl;
// //         cout<<"the salary is :"<<salary<<endl;

// //     }

// // };
// // class department :public engineer
// // {
// //     protected:
// //     string  depart;
// //     int year;

// //     public:
// //     void dispaly()
// //     {
// //         cout<<"enter your department and working year:"<<endl;
// //         cin>>depart>>year;
// //     }
// //     void go()
// //     {
// //         cout<<"the department is "<<depart<<"and year is "<<year;
// //     }
// // };
// // class repo:public department
// // {
// //     protected:
// //     string frind;
// //     public :
// //     void dispaly()
// //     {
// //         cout<<"enter your friend name :"<<endl;
// //         cin>>frind;
// //     }
// //     void go()
// //     {
// //         cout<<"your friend is :"<<frind;
// //     }
// // };
// // int main ()
// // {
// //     repo s ;
// //     s.dispaly();
// //     s.go();
// // }
// //the output isr friendname and go of the sma obje but other are not called due to ambiguity


// #include<iostream>
// using namespace std;
// class engineer
// {
//     protected:
//     string  name;
//     string  salary;
//     public:
//     void dispaly()
//     {
//         cout<<"enter your :name"<<endl;
//         cin>>name;
//         cout<<"enter your salary:"<<endl;
//         cin>>salary;

//     }
//     void go()
//     {
//         cout <<"the name is :"<<name <<endl;
//         cout<<"the salary is :"<<salary<<endl;

//     }

// };
// class department :public engineer
// {
//     protected:
//     string  depart;
//     int year;

//     public:
//     void dispaly()
//     {
//         cout<<"enter your department and working year:"<<endl;
//         cin>>depart>>year;
//     }
//     void go()
//     {
//         cout<<"the department is "<<depart<<"and year is "<<year;
//     }
// };
// class repo:public department
// {
//     protected:
//     string frind;
//     public :
//     void dispaly()
//     {
//         cout<<"enter your friend name :"<<endl;
//         cin>>frind;
//     }
//     void go()
//     {
//         cout<<"your friend is :"<<frind;
//     }
// };
// int main ()
// {
//     repo s ;
//     s.engineer:: dispaly();
//     s.engineer:: go();
//     s.department:: dispaly();
//     s.department:: go();
//     s.dispaly();
//     s.go();
// } 



//we can excess it by this way because we uses the excess modifier public



// #include<iostream>
// using namespace std;
// class engineer
// {
//     protected:
//     string  name;
//     string  salary;
//     public:
//     void dispaly()
//     {
//         cout<<"enter your :name"<<endl;
//         cin>>name;
//         cout<<"enter your salary:"<<endl;
//         cin>>salary;

//     }
//     void go()
//     {
//         cout <<"the name is :"<<name <<endl;
//         cout<<"the salary is :"<<salary<<endl;

//     }

// };
// class department :protected engineer
// {
//     protected:
//     string  depart;
//     int year;

//     public:
//     void dispaly()
//     {
//         cout<<"enter your department and working year:"<<endl;
//         cin>>depart>>year;
//     }
//     void go()
//     {
//         cout<<"the department is "<<depart<<"and year is "<<year;
//     }
// };
// class repo:protected department
// {
//     protected:
//     string frind;
//     public :
//     void dispaly()
//     {
        
//         cout<<"enter your :name"<<endl;
//         cin>>name;
//         cout<<"enter your salary:"<<endl;
//         cin>>salary;
//         cout<<"enter your department and working year:"<<endl;
//         cin>>depart>>year;
//         cout<<"enter your friend name :"<<endl;
//         cin>>frind;
//     }
//     void go()
//       {  
//         cout <<"the name is :"<<name <<endl;
//         cout<<"the salary is :"<<salary<<endl;
    
//         cout<<"your friend is :"<<frind;
//     }
// };
// int main ()
// {
//     repo s ;
//     s.dispaly();
//     s.go();
// }

//run because it is protected data member and usin only within the de3rived calss but we can excess it from main function like i nthe previous way




#include<iostream>
using namespace std;
class engineer
{
    protected:
    string  name;
    string  salary;
    public:
    void dispaly()
    {
        cout<<"enter your :name"<<endl;
        getline(cin,name);
        cout<<"enter your salary:"<<endl;
        cin>>salary;

    }
    void go()
    {
        cout <<"the name is :"<<name <<endl;
        cout<<"the salary is :"<<salary<<endl;

    }

};
class department :private engineer
{
    protected:
    string  depart;
    int year;

    public:
    void dispaly()

    {
         engineer::dispaly(); //since isthe private in this can so in order to excess int the further class we do thisd

        cout<<"enter your department and working year:"<<endl;
        cin>>depart>>year;
    }
    void go()
    {
           engineer::go();
        cout<<"the department is "<<depart<<"and year is "<<year;
    }
};
class repo:private department
{
    protected:
    string frind;
    public :
    void dispaly()
    {
     
        department::dispaly();
        cout<<"enter your friend name :"<<endl;
        cin>>frind;
    }
    void go()
      {  
     
        department::go();
         cout<<"your friend is :"<<frind;
    }
};
int main ()
{
    repo s ;
    s.dispaly();
    s.go();
}
