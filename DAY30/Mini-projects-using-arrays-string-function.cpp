#include <iostream>
using namespace std;

int roll[100];
string name[100];
float marks[100];
int n;

void input() 
{
    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) 
    {
        cout << "\nEnter Roll No: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }
}

void display() 
{
    cout << "\n----- Student Details -----\n";
    cout << "Roll\tName\tMarks\n";

    for(int i = 0; i < n; i++) 
    {
        cout << roll[i] << "\t" << name[i]
             << "\t" << marks[i] << endl;
    }
}

int main() 
{
    input();
    display();

    return 0;
}