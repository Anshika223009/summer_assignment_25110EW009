#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int id[100];
    string book[100];

    for(int i = 0; i < n; i++) 
    {
        cout << "\nEnter Book ID: ";
        cin >> id[i];

        cout << "Enter Book Name: ";
        cin >> book[i];
    }

    cout << "\n----- Library Records -----\n";

    for(int i = 0; i < n; i++) 
    {
        cout << "Book ID: " << id[i]
             << "  Book Name: " << book[i] << endl;
    }

    return 0;
}