#include <iostream>
#include <string>
using namespace std;

class car{
    public:
        string brandName;
        string model;
        string engine;
        int noOfSeats;
    void displayInfo(){
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Seats: " << noOfSeats << endl;
        cout << endl;
    }
};

int main(){
    car car1;
    car1.brandName = "Bugatti";
    car1.model = "Veyron Super Sport";
    car1.engine = "W16";
    car1.noOfSeats = 2;
    car1.displayInfo();
    return 0;
}