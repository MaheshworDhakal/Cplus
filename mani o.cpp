//manipulator are the helping foncution that format the input output streams . it is defined under 
//1 io stream 
//2 io manip
//output stream manipulator 
#include<iostream >
#include<iomanip>
using namespace std;
int main ()
{
	cout<<42<<endl;
	cout<<flush<<"LOADING...."<<endl;
	cout<<setw(3)<<42<<endl;
	cout<<fixed<<42.23<<endl;
	cout<<setprecision(3)<<42.12345<<endl;
	cout<<showpoint<<42.0<<endl;
	cout<<noshowpoint<<42.0<<endl;
	return 0;
}
