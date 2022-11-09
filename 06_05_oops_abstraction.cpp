#include <iostream>
using namespace std;
using std::string;
class AbstractEmployee
{

    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
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

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted";
        else
            cout << Name << " sorry no promotion";
    }
};

int main()
{
    Employee employee1 = Employee("Deepanshu", "NIT-Calicut", 40);

    Employee employee2 = Employee("Saldina", "You-Tube", 25);
    Employee employee3 = Employee("Bhanu", "Google", 19);

    employee1.AskForPromotion();
    cout << endl;
    employee2.AskForPromotion();
    cout << endl;
    employee3.AskForPromotion();
}