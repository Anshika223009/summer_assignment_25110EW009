#include <iostream>
using namespace std;

class Ticket {
public:
    string name;
    int seats;

    void input() {
        cin.ignore();
        cout << "Enter Passenger Name: ";
        getline(cin, name);
        cout << "Enter Number of Seats: ";
        cin >> seats;
    }

    void display() {
        cout << "\nTicket Booked Successfully";
        cout << "\nPassenger Name : " << name;
        cout << "\nSeats Booked : " << seats << endl;
    }
};

int main() {
    Ticket t;
    t.input();
    t.display();
    return 0;
}