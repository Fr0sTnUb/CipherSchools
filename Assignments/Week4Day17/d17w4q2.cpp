#include <iostream>
using namespace std;

int sum(int arr[20][20], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            sum += arr[i][j];
    return sum;
}

int main(){
    int arr[20][20];
    int r, c;
    cout << "Enter No. of rows in 2D array: ";
    cin >> r;
    cout << "Enter no. of columns in 2D array: ";
    cin >> c;
    cout << "Enter array: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    cout << sum(arr, r, c);
    return 0;
}