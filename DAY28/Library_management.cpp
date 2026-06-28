#include <iostream>
using namespace std;

class Library 
{
public:
    int id;
    string name;

    void input() 
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Name: ";
        getline(cin, name);
    }

    void display() 
    {
        cout << "\nBook ID : " << id;
        cout << "\nBook Name : " << name << endl;
    }
};

int main() 
{
    Library b;
    b.input();
    b.display();
    return 0;
}