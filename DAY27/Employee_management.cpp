#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n--- Employee Details ---";
        cout << "\nID     : " << id;
        cout << "\nName   : " << name;
        cout << "\nSalary : " << salary << endl;
    }
};

int main()
{
    Employee e;
    e.input();
    e.display();

    return 0;
}