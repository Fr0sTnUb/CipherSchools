#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(const string &str1, const string &str2){
    return str1 + str2;
}

int main(){
    string s1, s2;
    cout << "Enter string 1: ";
    getline(cin, s1);
    cout << "Enter string 2: ";
    getline(cin, s2);
    cout << concatenateStrings(s1, s2);
    return 0;
}