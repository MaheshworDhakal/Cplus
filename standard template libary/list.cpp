#include<iostream>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v={1,2,3,45,5};
    v.push_back(4);
    v.insert(v.begin(),20);
    for (int x:v)
    {
        cout<<x<<"\t";
    }
    for(int i=0;i<6;i++)
    {
        cout<<v[i]<<"\t";// it doesn't support [ ] operator so it is invaild 
    }
}