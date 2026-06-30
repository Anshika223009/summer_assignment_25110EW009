#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[100];
    string name[100];
    float salary[100];

    for(int i = 0; i < n; i++) 
    {
        cout << "\nEnter Employee ID: ";
        cin >> id[i];

        cout << "Enter Employee Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\n----- Employee Records -----\n";

    for(int i = 0; i < n; i++) 
    {
        cout << "ID: " << id[i]
             << "  Name: " << name[i]
             << "  Salary: " << salary[i] << endl;
    }

    return 0;
}