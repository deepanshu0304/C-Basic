#include <iostream>
using namespace std;
using std::string;
class Employee
{

private:
    string Name;
    string Company;
    int Age;
public:
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    /* below we created constructor(it is created inside class)which is somewaht like function but it does not have any
    return value ....
    and it should also be public...*/
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Deepanshu", "NIT-Calicut", 18);
    employee1.IntroduceYourself();
    cout << endl;
    Employee employee2 = Employee("Saldina", "You-Tube", 25);
    employee2.IntroduceYourself();

    Employee employee3 = Employee("john", "google", 50);
    employee3.IntroduceYourself();
}