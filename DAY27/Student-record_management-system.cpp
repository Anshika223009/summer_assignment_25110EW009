#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Record ---";
        cout << "\nRoll No : " << roll;
        cout << "\nName    : " << name;
        cout << "\nMarks   : " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}