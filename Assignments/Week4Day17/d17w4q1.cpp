#include <iostream>
using namespace std;

int search(int arr[20][20], int row, int col, int key){
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] == key)
                return 1;
    return -1;
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
    int key;
    cout << "Enter key: ";
    cin >> key;
    if (search(arr, r, c, key) == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}