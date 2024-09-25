#include <iostream>
using namespace std;

int main(){
    int t;
    cout << "Enter target: ";
    cin >> t;
    cout << "Enter array (End your array with a period (.) ): ";
    int arr[100], size = 0;
    while(cin >> arr[size])
        ++size;
    for (int i = 0; i < size; i++){
        if (arr[i] == t){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}