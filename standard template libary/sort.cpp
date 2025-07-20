#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector <int> v= {1,3,5,3,2,6,3,534,52,534};
sort(v.begin(),v.end());
for(int x :v)
{
    cout<<x<<"\t";
}
}