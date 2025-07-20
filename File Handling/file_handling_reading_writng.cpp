#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofile("bhabuk.txt");
    ofile<<"hey bro !"<<endl;
    ofile.close();
    ifstream infile("bhabuk.txt");
    string n;
    while(infile>>n)
    {
        cout<<n<<" ";
    }
    infile.close();
}