 #include<iostream>
 using namespace std;
 class complex
 {
    private:
    int real,imag;
    public:
    complex()
    {
        cout<<"constructor is called:"<<endl;
        cout<<"enter the real part:"<<endl;
        cin>>real;
        cout<<"enter the imaginary part:"<<endl;
        cin>>imag;

    }
    void show()
    {
        if(imag>0)
        {
            cout<<real<<"+"<<imag<<"i"<<endl;

        }
        else
        {
            cout<<real<<imag<<"i"<<endl;

        }
    }
    complex(complex c1, complex c2)
    {
        real=c1.real +c2.real;
        imag= c1.imag+c2.imag ;
    }
    ~ complex()
    {
        cout<<"destructor called successfullly  :";
    }
    
 };
 int main()
 {
    complex c1,c2;

    complex c3(c1,c2);
    cout<<"the sum of the complex number is :"<<endl<<endl;
    c3.show();
 }
