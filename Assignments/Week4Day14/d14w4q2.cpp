#include <iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;
    Rectangle();
    Rectangle(Rectangle& r){
        this -> length = r.length;
        this -> breadth = r.breadth;
    }
};

Rectangle::Rectangle(){
}

int main(){
    Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    cout << "Length of the given rectangle: " << r1.length << endl;
    cout << "Breadth of the given rectangle: " << r1.breadth << endl;
    cout << endl;
    Rectangle r2(r1);
    cout << "Length of the copied rectangle: " << r2.length << endl;
    cout << "Breadth of the copied rectangle: " << r2.breadth << endl;
    return 0;
}