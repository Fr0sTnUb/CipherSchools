#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("text1.txt");
    file << "This is a sample text.";
    file.close();
    ifstream out("text1.txt");
    string line;
    while(getline(out, line))
        cout << line << endl;
    file.close();
    return 0;
}