#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bool loop = true;
    system("clear");
    do {
        char choice;
        char choice_from, choice_to;
        int decimal;
        string input;

        cout << "Choose conversion type:\n";
        cout << "1. Character\n";
        cout << "2. Binary\n";
        cout << "3. Hexadecimal\n";
        cout << "4. Decimal\n";
        
        cout << "Enter from (1-4): ";
        cin >> choice_from;
        cout << "Enter to (1-4): ";
        cin >> choice_to;

        if (choice_from == '1') {
            char ch;
            cout << "Enter a character: ";
            cin >> ch;

            if (choice_to == '2') {
                cout << "Binary: " << bitset<8>(ch) << endl;
            } else if (choice_to == '3') {
                cout << "Hexadecimal: " << hex << (int)ch << endl;
            } else if (choice_to == '4') {
                cout << "Decimal: " << (int)ch << endl;
            }
        } else if (choice_from == '2') {
            cout << "Enter a binary number: ";
            cin >> input;
            decimal = stoi(input, nullptr, 2);

            if (choice_to == '1') {
                cout << "Character: " << (char)decimal << endl;
            } else if (choice_to == '3') {
                cout << "Hexadecimal: " << hex << decimal << endl;
            } else if (choice_to == '4') {
                cout << "Decimal: " << decimal << endl;
            }
        } else if (choice_from == '3') {
            cout << "Enter a hexadecimal number: ";
            cin >> input;
            decimal = stoi(input, nullptr, 16);

            if (choice_to == '1') {
                cout << "Character: " << (char)decimal << endl;
            } else if (choice_to == '2') {
                cout << "Binary: " << bitset<8>(decimal) << endl;
            } else if (choice_to == '4') {
                cout << "Decimal: " << decimal << endl;
            }
        } else if (choice_from == '4') {
            cout << "Enter a decimal number: ";
            cin >> decimal;

            if (choice_to == '1') {
                cout << "Character: " << (char)decimal << endl;
            } else if (choice_to == '2') {
                cout << "Binary: " << bitset<8>(decimal) << endl;
            } else if (choice_to == '3') {
                cout << "Hexadecimal: " << hex << decimal << endl;
            }
        } else {
            cout << "Invalid option. Please choose a valid number." << endl;
        }
        
        cout << "Continue [y/n]: ";
        cin >> choice;
        if (choice == 'n')
        {
            loop = false;
        }
        system("clear");

    } while (loop);

    return 0;
}

