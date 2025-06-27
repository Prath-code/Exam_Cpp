#include <iostream>
#include <string>
using namespace std;

class Student
{
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_email;
    string stu_college;

public:
    void registerStudent()
    {
        cout << "Enter Student ID: ";
        cin >> stu_id;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, stu_name);

        cout << "Enter Student Age: ";
        cin >> stu_age;
        cin.ignore();

        cout << "Enter Student Course: ";
        getline(cin, stu_course);

        cout << "Enter Student Email: ";
        getline(cin, stu_email);

        cout << "Enter Student College: ";
        getline(cin, stu_college);
    }

    void displayStudent()
    {
        cout << "\n--- Student Information ---\n";
        cout << "ID: " << stu_id << endl;
        cout << "Name: " << stu_name << endl;
        cout << "Age: " << stu_age << endl;
        cout << "Course: " << stu_course << endl;
        cout << "Email: " << stu_email << endl;
        cout << "College: " << stu_college << endl;
    }
};

int main()
{
    Student s;
    s.registerStudent();
    s.displayStudent();
    return 0;
}