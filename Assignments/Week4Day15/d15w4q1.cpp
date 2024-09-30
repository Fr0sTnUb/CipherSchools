#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int rollNo;
        string course;
        string section;
        int regNo;
    void displayDetails(){
        cout << "Student Details" << endl;
        cout << "Roll No.: " << this -> rollNo << endl;
        cout << "Course: " << this -> course << endl;
        cout << "Section: " << this -> section << endl;
        cout << "Registration Number: " << this -> regNo << endl;
    }
};

int main(){
    Student s1;
    s1.rollNo = 15;
    s1.course = "B.Tech.";
    s1.section = "K23SR";
    s1.regNo = 12307353;
    s1.displayDetails();
    return 0;
}