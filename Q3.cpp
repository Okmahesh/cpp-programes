#include <iostream>
#include <string>

using namespace std;

int main() {
    int count[26] = {0};
    string text;

    cout << "Enter the text: ";
    getline(cin,text);

    for(char c : text) { 
        if(isalpha(c)) {
            count[tolower(c) - 'a']++;
        }
    }

    cout << "Alphabet\tCount"<<endl;
    for(int i = 0; i < 26; i++) { 
        if(count[i] > 0) { 
            cout << (char)('a' + i) << "\t-\t" << count[i] << "\n"; 
        }
    }

    return 0;
}