#include<iostream>
using namespace std;
class Engine
{
    private:
    //components
    public:
    void start()
    {
        cout<<"the engine of the car is  started :"<<endl;

    }
};
class car{
    private:
    Engine e;
    public:
    void run()
    {
        e.start();
        cout<<"the car is now running smoothly :"<<endl;

    }
};
int main()
{
    car c;
    c.run();
}
