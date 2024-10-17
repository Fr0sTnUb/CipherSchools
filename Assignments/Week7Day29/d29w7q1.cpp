#include <iostream>
using namespace std;

class Instrument{
    public:
    virtual void playSound(){

    }
    virtual void display(){

    }
};

class Piano : public Instrument{
    void playSound() override {
        cout << "Playing a melodious piano tune." << endl;
        cout << endl;
    }
    void display() override {
        cout << "This is a piano." << endl;
        cout << endl;
    }
};

class Violin : public Instrument{
    void playSound() override {
        cout << "Playing a classical violin tune." << endl;
        cout << endl;
    }
    void display(){
        cout << "This is a violin." << endl;
        cout << endl;
    }
};

int main(){
    Instrument *arr[5];
    arr[0] = new Piano;
    arr[1] = new Violin;
    for (int i = 0; i < 2; i++){
        arr[i]->display();
        arr[i]->playSound();
    }
    for (int i = 0; i < 2; i++)
        delete arr[i];
    return 0;
}