// #include<iostream>
// using namespace std;
// class input
// {
//     public:
//         string str1,str2;
//         void getinput()
//         {
//             cout<<"enter a first  string :"<<endl;
//             cin>>str1;
//             cout<<"enter a second string :"<<endl;
//             cin>>str2;
//         }
    
// };
// class concatenate
// {
//     private:
//     input i;
//     string str;
//     public:
//     void concat()
//     {
//         i.getinput();
//         str=i.str1+ " "+i.str2;
//         cout<<"the final string becomes: "<<str<<endl;
//     }
// };
// int main()
// {
//     concatenate c;
//     c.concat();
// }



// // #include<iostream>
// // using namespace std;
// // class input{
// //     public:
// //     int x,y;
// //     void getinput()
// //     {
// //         cout<<"enter the first integer:"<<endl;
// //         cin>>x;
// //         cout<<"enter the second integer:"<<endl;
// //         cin>>y;
// //     }
// // };
// // class calculate
// // {
// //     private:
// //     input i;
// //     public:
// //     void perform()
// //     {
// //         i.getinput();
// //         cout<<"the sum of the number is : "<<i.x+i.y<<endl;
// //         cout<<"the difference of the number is :"<<i.x-i.y<<endl;
// //         cout<<" the product of the number is :"<<i.x*i.y<<endl;
// //     }
// // };
// // int main()
// // {
// //     calculate c;
// //     c.perform();
// //     return 0;
// // }

#include<iostream>
using namespace std;
class Date
{
    public:
    int day ,month, year;
    void getdata()
    {
        cout<<"enter the date in year month and day format"<<endl;
        cin>>year;
        cin>>month;
        cin>>day;

    }
    void display()
        {
            cout<<"Date: "<<year<<" - "<<month<<" - "<<day<<endl;

        }
};
class event
{
    private:
    Date d;
    string name;
    public:
    void get()
    {
        cout<<"enter the event name: "<<endl;
        cin>>name;
        d.getdata();

    }
    void show()
    {
        cout<<"the name of the event is : "<<name<<endl;
        d.display();


    }
};
int main()
{
    event e;
    e.get();
    e.show();
    return 0;
}