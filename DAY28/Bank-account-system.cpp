#include <iostream>
using namespace std;

class Bank 
{
public:
    int accNo;
    string name;
    float balance;

    void input() 
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cin.ignore();
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display() 
    {
        cout << "\nAccount Number : " << accNo;
        cout << "\nAccount Holder : " << name;
        cout << "\nBalance : " << balance << endl;
    }
};

int main() 
{
    Bank b;
    b.input();
    b.display();
    return 0;
}