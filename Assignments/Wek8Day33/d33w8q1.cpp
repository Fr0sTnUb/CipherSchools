#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string str;
    map<char, int> m;
    cout << "Enter the string: ";
    cin >> str;
    int i = 0;
    while(str[i] != '\0'){
        ++m[str[i]];
        ++i;
    }
    i = 0;
    while(str[i] != '\0'){
        int j = 0;
        while(str[j] != '\0'){
            if (m[str[i]] > m[str[j]]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            ++j;
        }
        ++i;
    }
    cout << str;
    return 0;
}