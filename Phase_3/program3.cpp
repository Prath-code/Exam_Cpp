#include <iostream>
#include <vector>
#include <string>
#include <regex>
using namespace std;

bool isValidPassword(string password)
{
    regex pattern("(?=.*[0-9])(?=.*[a-z])(?=.*[A-Z])(?=.*[^a-zA-Z0-9]).{1,}");
    return regex_match(password, pattern);
}

int main()
{
    vector<string> emails, passwords;
    int choice;
    while (true)
    {
        cout << "1. Register\n2. Login\n3. Delete Account\n4. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            string email, password;
            cout << "Enter email: ";
            cin >> email;
            cout << "Enter password: ";
            cin >> password;
            if (isValidPassword(password))
            {
                emails.push_back(email);
                passwords.push_back(password);
                cout << "Registration successful.\n";
            }
            else
            {
                cout << "Password does not meet criteria.\n";
            }
        }
        else if (choice == 2)
        {
            string email, password;
            cout << "Enter email: ";
            cin >> email;
            cout << "Enter password: ";
            cin >> password;
            bool found = false;
            for (size_t i = 0; i < emails.size(); ++i)
            {
                if (emails[i] == email && passwords[i] == password)
                {
                    found = true;
                    break;
                }
            }
            if (found)
            {
                cout << "Login successful.\n";
            }
            else
            {
                cout << "Invalid credentials.\n";
            }
        }
        else if (choice == 3)
        {
            string email;
            cout << "Enter email to delete: ";
            cin >> email;
            bool deleted = false;
            for (size_t i = 0; i < emails.size(); ++i)
            {
                if (emails[i] == email)
                {
                    emails.erase(emails.begin() + i);
                    passwords.erase(passwords.begin() + i);
                    deleted = true;
                    break;
                }
            }
            if (deleted)
            {
                cout << "Account deleted.\n";
            }
            else
            {
                cout << "Account not found.\n";
            }
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}
