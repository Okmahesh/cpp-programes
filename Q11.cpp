#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int classs;
    int year;
    float marks;

public:
    void setDetails(string n, int r,int t, int y, float m)
    {
        name = n;
        rollNo = r;
        classs=t;
        year = y;
        marks = m;
    }
    void writefile(){
      ofstream myfile;
      myfile.open ("file.txt");
      myfile << "Name of student is "<<name<<"|| Roll number:-"<<rollNo<<"|| Class:-"<<classs<<"|| year:- "<<year<<"|| marks:-"<<marks<<endl;
      myfile.close();
    }

};

int main()
{
    Student s1, s2;
    string a;
    int b,c,d;
    double e;
    cout<<"Enter student's name:-";
    cin>>a;
    cout<<"\nEnter student's roll number:-";
    cin>>b;
    cout<<"\nEnter student's class:-";
    cin>>c;
    cout<<"\nEnter student's class year:-";
    cin>>d;
    cout<<"\nEnter student's marks:-";
    cin>>e;
    cout<<endl;
    s1.setDetails(a,b,c,d,e);
    s1.writefile();
    string myText;

    ifstream MyReadFile("file.txt");
    while (getline (MyReadFile, myText)) {
      cout << myText;
    }

    MyReadFile.close();
    return 0;
}
