#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int arr[10][10];
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            for (int k = 0; k < r; k++)
                for (int l = 0; l < c; l++)
                    if (arr[i][j] < arr[k][l])
                        swap(arr[i][j], arr[k][l]);
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}