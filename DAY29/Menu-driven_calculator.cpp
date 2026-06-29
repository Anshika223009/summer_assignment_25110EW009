#include <iostream>
using namespace std;

int main() 
{
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) 
    {
        case 1:
            cout << "Addition = " << a + b;
            break;
        case 2:
            cout << "Subtraction = " << a - b;
            break;
        case 3:
            cout << "Multiplication = " << a * b;
            break;
        case 4:
            if(b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Division not possible";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}