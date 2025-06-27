#include <iostream>
#include <string>
using namespace std;

class P
{
protected:
    static int count;
    int id;
    string name;
    int age;

public:
    P() { id = ++count; }
    void setP(const string &n, int a)
    {
        name = n;
        age = a;
    }
    int getId() const { return id; }
    string getName() const { return name; }
    int getAge() const { return age; }
};
int P::count = 0;

class Q : public P
{
protected:
    string role;
    double salary;
    int experience;

public:
    void setQ(const string &r, double s, int e)
    {
        role = r;
        salary = s;
        experience = e;
    }
    string getRole() const { return role; }
    double getSalary() const { return salary; }
    int getExperience() const { return experience; }
};

class R : public Q
{
protected:
    string email;
    string city;

public:
    void setR(const string &em, const string &c)
    {
        email = em;
        city = c;
    }
    string getEmail() const { return email; }
    string getCity() const { return city; }
};

class S : public R
{
    string company_name;

public:
    void setCompany(const string &cn)
    {
        company_name = cn;
    }
    void display() const
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "Experience: " << experience << endl;
        cout << "Email: " << email << endl;
        cout << "City: " << city << endl;
        cout << "Company Name: " << company_name << endl;
    }
};

int main()
{
    S emp;
    emp.setP("John Doe", 30);
    emp.setQ("Developer", 75000, 5);
    emp.setR("john@example.com", "New York");
    emp.setCompany("TechCorp");
    emp.display();
    return 0;
}