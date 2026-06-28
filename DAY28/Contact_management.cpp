#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    string phone;

    void input() {
        cin.ignore();
        cout << "Enter Contact Name: ";
        getline(cin, name);
        cout << "Enter Phone Number: ";
        getline(cin, phone);
    }

    void display() {
        cout << "\nContact Details";
        cout << "\nName : " << name;
        cout << "\nPhone : " << phone << endl;
    }
};

int main() {
    Contact c;
    c.input();
    c.display();
    return 0;
}