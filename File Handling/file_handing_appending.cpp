#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 //   fstream ofile("example.txt", ios::app); appending mode coudn't read the data
 fstream ofile("bhabuk.txt",ios::in|ios::out|ios::app);// but in this create if file doesn't exit it make the file and start to append
    ofile<<" my name is bhabuk dhakal and i am from sundarbazar 5 lamjung."<<endl;
    ofile.flush();

    //Reset read position to ofile start:
    ofile.clear();     // Remove EOF flag
    ofile.seekg(0);
    string n;
    while(ofile>>n)
    {
        cout<<n<<" ";
    }
    ofile.close();
}