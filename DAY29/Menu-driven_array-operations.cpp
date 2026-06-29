#include <iostream>
using namespace std;

int main() 
{
    int n, i, choice;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Display";
    cout << "\n2. Sum";
    cout << "\n3. Maximum";
    cout << "\n4. Minimum";
    cout << "\nEnter choice: ";
    cin >> choice;

    switch(choice) 
    {
        case 1:
            cout << "Array Elements: ";
            for(i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2: 
        {
            int sum = 0;
            for(i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;
        }

        case 3: 
        {
            int max = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] > max)
                    max = arr[i];
            cout << "Maximum = " << max;
            break;
        }

        case 4: 
        {
            int min = arr[0];
            for(i = 1; i < n; i++)
                if(arr[i] < min)
                    min = arr[i];
            cout << "Minimum = " << min;
            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}