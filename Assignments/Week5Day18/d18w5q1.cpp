#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string firstName;
        string lastName;
        unsigned age;
    Person(){
        cout << "Enter first name: ";
        cin >> this -> firstName;
        cout << "Enter last name: ";
        cin >> this -> lastName;
        cout << "Enter age: ";
        cin >> this -> age;
    }
    string getFullName(){
        return firstName + " " + lastName + "\n";
    }
    tuple<string, string, unsigned>getDetails(){
        return make_tuple(firstName, lastName, age);
    }
};

int main(){
    Person p;
    cout << p.getFullName();
    string f, l;
    unsigned a;
    tie(f, l, a) = p.getDetails();
    cout << "First Name: " << f << endl;
    cout << "Last Name: " << l << endl;
    cout << "Age: " << a << endl;
    return 0;
}