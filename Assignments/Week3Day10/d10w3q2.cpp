#include <iostream>
using namespace std;

bool isPalindrome(const string &str){
    int i = 0;
    char arr[100], size = 0;
    while(str[i] != NULL){
        if((str[i] >= 97 && str[i] <=122) || (str[i] >= 48 && str[i] <= 57))
            arr[size++] = str[i];
        else if(str[i] >= 65 && str[i] <= 90)
            arr[size++] = str[i] + 32;
        ++i;
    }
    int j = 0, k = size - 1;
    while(j < k){
        if (arr[j] != arr[k])
            break;
        ++j;
        --k;
    }
    if (j >= k)
        return true;
    else
        return false;
}

int main(){
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1);
    if (isPalindrome(s1))
        cout << "true";
    else
        cout << "false";
    return 0;
}