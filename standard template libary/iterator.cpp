#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <string> v= {"python", "java","c","c++"};
    vector<string>::iterator it=v.begin()+1;
    v.insert(it,"ruby");
   
    for(string x:v)
    {
        cout<<x<<"\t";
    }
}