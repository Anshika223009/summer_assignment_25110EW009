#include <iostream>
using namespace std;

int main()
{
    string name;
    int roll;
    float m1, m2, m3, total, per;

    cout << "Enter Roll No: ";
    cin >> roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3;

    cout << "\n------ Marksheet ------";
    cout << "\nRoll No    : " << roll;
    cout << "\nName       : " << name;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage : " << per << "%";

    if (per >= 90)
        cout << "\nGrade : A+";
    else if (per >= 75)
        cout << "\nGrade : A";
    else if (per >= 60)
        cout << "\nGrade : B";
    else if (per >= 40)
        cout << "\nGrade : C";
    else
        cout << "\nGrade : Fail";

    return 0;
}