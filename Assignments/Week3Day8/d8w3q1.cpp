#include <iostream>
#include <string>
using namespace std;

int stringLength(const string &str){
    int count = 0;
    while (str[count] != NULL)
        ++count;
    return count;
}

int main(){
    cout << "Enter string: ";
    string str1;
    getline(cin, str1);
    cout << stringLength(str1);
    return 0;
}