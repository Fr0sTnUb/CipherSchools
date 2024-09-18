#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string &str1){
    int left = 0;
    int right = str1.length() - 1;

    while(left < right){
        while(left < right && ! isalpha(str1[left]) && !isdigit(str1[left])){
            left++;
        }
        while(left < right && ! isalpha(str1[right]) && !isdigit(str1[right])){
            right--;
        }

        if(tolower(str1[left]) != tolower(str1[right])){
            return false;
        }

        left++;
        right--;
    }

    return true;
}


int main(){
    
    string str1 = "A man, a plan, a canal, Panama";

    cout << isPalindrome(str1);
   return 0;
}