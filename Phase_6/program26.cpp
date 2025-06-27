#include <iostream>
#include <string>
using namespace std;

class P
{
protected:
    static int count;
    int id, age;
    string name;

public:
    void setP(int i, string n, int a)
    {
        id = i;
        name = n;
        age = a;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

int P::count = 0;

class Q : public P
{
protected:
    string role;
    double salary;
    int experience;

public:
    void setQ(string r, double s, int e)
    {
        role = r;
        salary = s;
        experience = e;
    }
};

class R : public Q
{
protected:
    string email, city;

public:
    void setR(string em, string c)
    {
        email = em;
        city = c;
    }
    void getR()
    {
        cout << "ID: " << id << ", Role: " << role << ", Salary: " << salary << endl;
    }
};

class S : public R
{
    string company_name;

public:
    void setS(string comp)
    {
        company_name = comp;
    }
    void getS()
    {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age
             << ", Salary: " << salary << ", Experience: " << experience
             << ", Email: " << email << ", Company: " << company_name
             << ", City: " << city << ", Role: " << role << endl;
    }
};

int main()
{
    S emp;
    emp.setP(1, "John Doe", 30);
    emp.setQ("Developer", 75000, 5);
    emp.setR("john@example.com", "New York");
    emp.setS("TechCorp");
    emp.getR();
    emp.getS();
    cout << "Total Employees: " << S::getCount() << endl;
    return 0;
}