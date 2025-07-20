//reading or writing mode
/*

These modes include:

ios::in (read)

ios::out (write)

ios::app (append)

ios::ate, ios::trunc, ios::binary .


 Opening a File
Write (create or overwrite):

std::ofstream out("example.txt");
Read:

std::ifstream in("example.txt");
Read & write:

std::fstream io("example.txt", std::ios::in | std::ios::out);
Append mode:

std::ofstream app("example.txt", std::ios::app);
*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile("filehanding.txt");
    string n;
    while (infile>>n)
    {
        cout<<n<<endl;
    }
    infile.close();

}

