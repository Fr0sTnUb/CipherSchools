#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int st = 0, fin = 0;
    int max = arr[0];
    int sum = arr[0];        
    for (int i = 1; i < n; i++){
        if (max + arr[i] < arr[i]){
            max = arr[i];
            st = i;
        }
        else
            max += arr[i];
        if (max > sum){
            sum = max;
            fin = i;
        }
    }
    while (st <= fin){
        cout << arr[st] << " ";
        ++st;
    }
    return 0;
}