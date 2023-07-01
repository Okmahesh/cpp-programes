#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
using namespace std;


void rwhitespace(string s){
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            result += s[i];
        }
    }
    ofstream out("file2.txt");
    out<<result;
}

int main(){
    string str;
    ifstream in("file1.txt");
    getline(in,str);
    cout<<str<<endl;
    rwhitespace(str);
    return 0;
}
