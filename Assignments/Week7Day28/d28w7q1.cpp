#include <iostream>
using namespace std;

class Vehicle{
    public:
    string make;
    int year;
    float fuel;
    Vehicle(string m, int y, float f){
        make = m;
        year = y;
        fuel = f;
    }
    void refuel(float amount){
        fuel += amount;
    }
    virtual void display(){
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << endl;
    }
};

class Car : public Vehicle{
    public:
    int doors;
    Car(string m, int y, float f, int d) : Vehicle(m, y, f){
        doors = d;
    }
    void display() override {
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Number of doors: " << doors << endl;
        cout << endl;
    }
    void openDoors(){
        cout << "Doors are opened." << endl;
        cout << endl;
    }
};

class Bike : public Vehicle{
    public:
    bool hasCarrier;
    Bike(string m, int y, float f, bool hc) : Vehicle(m, y, f){
        hasCarrier = hc;
    }
    void display() override {
        cout << "Manufacturer: " << make << endl;
        cout << "Year: " << year << endl;
        cout << "Fuel: " << fuel << endl;
        cout << "Has Carrier: ";
        if (hasCarrier)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cout << endl;
    }
    void kickStart(){
        cout << "Bike kick-started." << endl;
        cout << endl;
    }
};

int main(){
    Car c("Bugatti Chiron", 2012, 50, 2);
    Bike b("BMW", 2020, 20, 0);
    c.refuel(10);
    b.refuel(5);
    c.display();
    b.display();
    c.openDoors();
    b.kickStart();
    return 0;
}