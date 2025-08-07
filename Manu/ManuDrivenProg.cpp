#include<iostream>
using namespace std;

int main()
{
    int option, num;

    while (true) 
    {
        cout << "/******Menu*****/" << endl;
        cout << "1. Check even or odd" << endl;
        cout << "2. Find Square" << endl;
        cout << "3. Exit" << endl;

        cout << "Choose one option: ";
        cin >> option;

        switch(option)
        {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                if (num % 2 == 0)
                    cout << "This number is even." << endl;
                else
                    cout << "This number is odd." << endl;
                break;

            case 2:
                cout << "Enter a number: ";
                cin >> num;
                cout << "Square of " << num << " is: " << (num * num) << endl;
                break;

            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;  

            default:
                cout << "Choose a valid option!" << endl;
        }

        cout << endl; 
    }
    return 0;
}
