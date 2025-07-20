#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream oifile("maheshwor.txt",ios::in|ios::out);//doesn't create if doesn't exit
    //in this case i have already make the file which is open and then writen 
    if(!oifile.is_open())
    {
        cout<<"file doesn't exit:"<<endl;
        return 1;
    }
    oifile<<"my name is maheshwor dhakal:"<<endl;
    oifile.seekg(0);
    string name;
    while(oifile>>name)
    {
        cout<<name<<" ";
    }
    oifile.close();
}