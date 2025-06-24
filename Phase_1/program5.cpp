#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

/*
    5. Two college collegues had
        argue with a ASCII value
        conversion method. Write a
        C++ Program which provides a
        solution for their issue.
*/

void displayMenu();

int main()
{
    int choice;
    do
    {
        displayMenu();

        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            char input[10], letter;

            printf("Enter a single letter: ");
            fgets(input, sizeof(input), stdin);

            if (strlen(input) > 2 || !isalpha(input[0]) || input[1] != '\n')
            {
                cout << "Error: Input must be a single valid alphabet letter." << endl;
                return 1;
            }

            letter = input[0];
            int assci;
            assci = (int)letter;

            cout << "ASCII value of '" << letter << "' is " << assci;
        }
        break;

        case 2:
        {
            int ascii;
            cout << "Enter an ASCII value (0-127): ";
            cin >> ascii;
            cin.ignore();

            if (ascii < 0 || ascii > 127)
            {
                cout << "Error: Please enter a valid ASCII value between 0 and 127." << endl;
                break;
            }

            char letter = static_cast<char>(ascii);
            cout << "Character for ASCII value " << ascii << " is '" << letter << "'" << endl;
            break;
        }
        break;

        case 0:
            cout << "Exiting Proram...";
            break;

        default:
            cout << "Invalid choice...";
            break;
        }
    } while (choice != 0);
}

void displayMenu()
{
    cout << endl;
    cout << "+------------------------------+" << endl;
    cout << "|             Menu             |" << endl;
    cout << "+------------------------------+" << endl;
    cout << "| 1. Character to ASCII value  |" << endl;
    cout << "| 2. ASCII value to Character  |" << endl;
    cout << "| 0. Exit                      |" << endl;
    cout << "+------------------------------+" << endl;
}
