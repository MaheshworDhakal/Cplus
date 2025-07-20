// #include<iostream>
// #include<fstream>
// using namespace std;
// struct student
// {
//     string name;
//     string address;
//     int roll;
// };
// int main()
// {
//     int n;
//     cout<<"enter the number of the student:"<<endl;
//     cin>>n;
//     struct student s[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"enter the details of the student:"<<endl;
//         cout<<"name:"<<endl;
//         cin.ignore();
//         getline(cin,s[i].name);
//         cout<<"adress:"<<endl;
//         getline(cin,s[i].address);
//         cout<<"enter the roll number:"<<endl;
//         cin>>s[i].roll;
//     }
//     //write to file
//     ofstream outfile ("student.txt");
//     for(int i=0;i<n;i++)
//     {
//         outfile<<"name: "<<s[i].name<<"\n";
//         outfile<<"address :"<<s[i].address<<"\n";
//         outfile<<"roll: "<<s[i].roll<<"\n";
//         outfile<<"------------------------------------\n";
//     }
//     outfile.close();
//     ifstream infile("student.txt");
//     student temp;
//     for(int i=0;i<n;i++)
//     {
//         getline(infile,temp.name);
//         getline(infile,temp.address);
//         infile>>temp.roll;
//         infile.ignore();
//         if(temp.address=="kathmandu")
//         {
//         cout<<"name : "<<temp.name<<endl;;
//         cout<<"Adress :"<<temp.address<<endl;
//         cout<<"roll :"<<temp.roll<<endl;
//         cout<<"-------------------------\n";
//         }

//     }
//     infile.close();
//     return 1;
// }



#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct student {
    string name;
    string address;
    int roll;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    vector<student> s(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << (i+1) << ":\n";
        cout << "Name: ";
        getline(cin, s[i].name);
        cout << "Address: ";
        getline(cin, s[i].address);
        cout << "Roll number: ";
        cin>>s[i].roll;
        cin.ignore();
    }

    ofstream outfile("student.txt");
    for (auto &st : s) {
        outfile << st.name << '\n' << st.address << '\n' << st.roll << "\n---\n";
    }
    outfile.close();

    ifstream infile("student.txt");
    student temp;
    for(int i=0;i<n;i++)
    {
        getline(infile,temp.name);
        getline(infile,temp.address);
        infile>>temp.roll;
        infile.ignore();
        if(temp.address=="kathmandu")
        {
        cout<<"name : "<<temp.name<<endl;;
        cout<<"Adress :"<<temp.address<<endl;
        cout<<"roll :"<<temp.roll<<endl;
        cout<<"-------------------------\n";
        }

    }
    infile.close();
    return 1;
}
