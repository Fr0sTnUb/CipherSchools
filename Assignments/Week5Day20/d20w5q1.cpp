#include <iostream>
using namespace std;

int main(){
    int arr[10][10];
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];
    for (int i = 0; i < c; i++){
        for (int j = r - 1; j >= 0; j--){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}