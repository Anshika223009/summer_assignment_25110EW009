#include <iostream>
using namespace std;

class Inventory 
{
public:
    int id, quantity;
    char name[30];
    float price;

    void input() 
    {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() 
    {
        cout << "\nProduct ID : " << id;
        cout << "\nProduct Name : " << name;
        cout << "\nQuantity : " << quantity;
        cout << "\nPrice : " << price;
    }
};

int main() 
{
    Inventory p;

    p.input();

    cout << "\nInventory Details";
    p.display();

    return 0;
}