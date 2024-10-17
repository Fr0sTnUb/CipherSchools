#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> findNearestSmallerElements(const vector<int>& A) {
    int n = A.size();
    vector<int> G(n, -1);  
    stack<int> s; 
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() >= A[i]) {
            s.pop();
        }
        if (!s.empty()) {
            G[i] = s.top();
        }
        s.push(A[i]);
    }
    return G;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<int> G = findNearestSmallerElements(A);
    cout << "Output G array: [";
    for (int i = 0; i < n; i++) {
        cout << G[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
