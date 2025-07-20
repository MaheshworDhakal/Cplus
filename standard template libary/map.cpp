#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string ,int> age;
    age["ram"]=100;
    age["shyam"]=100;
    age["ram"]=28;
    for(auto pair:age)
    {
        cout<<pair.first<<":"<<pair.second<<endl;
    }
}