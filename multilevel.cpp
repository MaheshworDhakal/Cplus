    #include<iostream>
    using namespace std ;
    class company
    {
        protected:
            string name="Maheshwor" ;

    };
    class manager:public company
    {
        protected:
        int id=46 ;
    };
    class me:public manager
    {
        public:
        void display()
        {
            cout<<name<<endl;
            cout<<id<<endl;
        }
    };
    int main ()
    {
        me m;
        m.display();
    }