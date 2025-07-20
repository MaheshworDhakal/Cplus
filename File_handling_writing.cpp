//ofstream-create and write in a file
// fstream- can write and read in the file 
//ifstream read from the file


//creating and writing to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile ("filehanding.txt");
    if(!ofile)
    {
        cout<<"file not found :"<<endl;
        return 1;
    }
    else 
    {
        cout<<"file created successfully:"<<endl;

    }
   // ofile<<"we can write in a file using ofstream :"<<endl;
   // aso can by making string 
   string name;
    cout<<"enter your name";
    getline(cin,name);
    ofile<<name<<endl;
    ofile.close();
}