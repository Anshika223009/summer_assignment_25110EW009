#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "\n1. Find Length";
    cout << "\n2. Reverse";
    cout << "\n3. Uppercase";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch(choice) 
    {
        case 1:
            cout << "Length = " << strlen(str);
            break;

        case 2:
            strrev(str);
            cout << "Reversed String = " << str;
            break;

        case 3:
            for(int i = 0; str[i] != '\0'; i++)
                str[i] = toupper(str[i]);
            cout << "Uppercase = " << str;
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}