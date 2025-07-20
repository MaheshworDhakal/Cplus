#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string, int> age;
    age.insert({"ram", 100});
    age.insert({"shyam", 100});//doesn't support [] operator
    age.insert({"ram", 28}); // Allows multiple entries with the same key

    for (auto pair : age)
    {
        cout << pair.first << ":" << pair.second << endl;
    }
}
