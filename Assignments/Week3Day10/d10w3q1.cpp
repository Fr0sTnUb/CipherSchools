#include <iostream>
#include <limits.h>
using namespace std;

int findMax(const int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main(){
    int arr[100], size = 0;
    cout << "Enter array(End your array with a fullstop(.)): ";
    while (cin >> arr[size]){
        ++size;
    }
    cout << findMax(arr, size);
    return 0;
}