#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    int *arr1 = new int[n1];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of second array: ";
    cin >> n2;
    int *arr2 = new int[n2];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    map<int, int> m;
    stack<int> s;
    for (int i = 0; i < n2; i++){
        while(!s.empty() && s.top() < arr2[i]){
            m[s.top()] = arr2[i];
            s.pop();
        }
        s.push(arr2[i]);
    }
    while(!s.empty()){
        m[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " " << m[arr1[i]] << endl;
    return 0;
}