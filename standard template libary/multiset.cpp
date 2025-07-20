#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset <int> v={1,2,3,45,5};
  //  v.push_back(4);// not support push_back
    v.insert(v.begin(),20);
    v.insert(3); // duplication not allowed but code run
    v.erase(1);
    for (int x:v)
    {
        cout<<x<<"\t";
    }
    for(int i=0;i<6;i++)
    {
      //  cout<<v[i]<<"\t"; //not supported []
    }
}