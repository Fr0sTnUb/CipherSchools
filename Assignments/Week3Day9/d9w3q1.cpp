#include <iostream>
using namespace std;

int main(){
    int n = 12307353;
    int *ptr = &n;
    cout << "By variable: " << n << endl;
    cout << "By pointer: " << *ptr << endl;
    return 0;
}