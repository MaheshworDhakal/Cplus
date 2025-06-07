#include<iostream>
using namespace std;
class animal
{
    protected:
    string name ,species;
    int age;
    public:
    animal(string name,string species,int age)
    {
        animal::name=name; //if use two same name then use the scope resolution operator 
        animal::species=species ;// if you not use this operator no error comes during the 
        // compile time but the garbage value is printed when you print
        animal::age=age;
    }
    void showdata()
    {
        cout<<"name of the animal : "<<name<<endl;
        cout<<"name of the species : "<<species<<endl;
        cout<<"age:"<<age<<endl;
    }

};
class wild : protected animal
{
    protected:
    string region;
    string diet;
    string conservation;
    public:
    wild(string name,string species,int age):animal(name,species,age)
    {
        cout<<"enter the region where the animal found :"<<endl;
        getline(cin,region);
        cout<<"enter the diet and conservation area of the wild animal:"<<endl;
        cin>>diet>>conservation;
        cin.ignore();

    }
    void showdata()
    {
        animal::showdata();
        cout<<"the region of the wild animal :"<<region<<endl;
        cout<<"conservation area: "<<conservation<<endl;
        cout<<"diet :"<<diet ;
         

    }

};

class pet:protected animal
{
    protected:
    string owner_name;
    string food;
    public:
    pet(string name ,string species, int age):animal(name ,species,age)
    {
        cout<<"enter the name of the owner:"<<endl;
        getline(cin,owner_name);
        cout<<"enter the favourite food of the animal:"<<endl;
        cin>>food;
    }
    void showdata()
    {
        animal::showdata();
        cout<<"the owner of the pet is :"<<owner_name;
        cout<<"the favorite food is :"<<food;
    }


};
int main()
{
    string name ,species ;
    int age;


    cout<<"enter the name of the animal"<<endl;
    getline(cin,name);
    cout<<"enter the species of the animal:"<<endl;
    getline(cin,species);

    cout<<"enter the age of the animal"<<endl;
    cin>>age;
    cin.ignore();
    wild w(name,species,age);
   
    pet p(name, species,age);
  
     w.showdata();
       p.showdata();
}