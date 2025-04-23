#include<iostream>
using namespace std;
class teacher 
{
//'properties 
private:
double salary;
public:
string name ;
string dept;
string subject ;
//setter
void setsalary(double s)
{
    salary=s;
}
//getter
double getsalary()
{
    return salary ;
}

//function 
void changedept(string newdept)
{
    dept=newdept;
}

};




int main ()
{
    teacher t1;
    //object is t1;
    
    teacher t2;
    cout<<"enter your name "<<endl;
    getline(cin,t1.name);
    t1.subject="oops";
    t1.dept="computer science ";
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getsalary();
    return 0;
}
/*
if the classes is in private mode then when  can excess the 
 data within the class only so  in order to excess the data for (change and recive data  
we make the funcion called setter and getter

by default our program in private mode 
 
 in public 
 there is no need of function we can directly excess the data */
 
 
 
