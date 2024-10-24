#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        int min = 0;
        for (int j = 1; j < n; j++)
            if (min < arr[j] - arr[j - 1])
                min = arr[j] - arr[j - 1];
        if (min < arr[0])
            min = arr[0];
        if (min < 2 * (x - arr[n - 1]))
            min = 2 * (x - arr[n - 1]);
        cout << min << endl;
    }
    return 0;
}