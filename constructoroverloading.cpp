#include<iostream>
using namespace std;
class time 
{
    private:
    int hour,min,sec;
    public:
    time()
    {
    hour=3;
    min=36;
    sec=2;

    }
    time(int h, int m, int s)
    {
        hour=h;
        min= m;
        sec=s;
    }
    time(time &s)
    {
        hour=s.hour;
        min=s.min;
        sec=s.sec;

    }
   void display() {
        cout << "time :"
             << (hour < 10 ? "0" : "") << hour << ":"
             << (min < 10 ? "0" : "") << min << ":"
             << (sec < 10 ? "0" : "") << sec;
    }


    }
;
int main ()
{
    int h,m,s;
    cout<<"enter the hour minute and second";
    cin>>h>>m>>s;
    time t;
    time t1(h,m,s);
    time t2(t1);
    t1.display();
    t.display();
    t2.display();

}