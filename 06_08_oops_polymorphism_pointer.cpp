#include <iostream>
using namespace std;
using std::string;

class Employee
{

public:
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

public:
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
     virtual void Work()
    {
        cout << Name << " is checking mails,backlogs" << endl;
    }
};
class Developer : public Employee
{
public:
    string FavLanguage;

public:
    Developer(string name, string company, int age, string language)
        : Employee(name, company, age)
    {
        FavLanguage = language;
    }
    void fixbug()
    {
        cout << Name << " solved bug using " << FavLanguage << endl;
    }
    void Work()
    {
        cout << Name << " is coding in " << FavLanguage << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    void Work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    Developer d = Developer("Deepanshu", "NIT-Calicut", 18, "c++");

    Teacher t1 = Teacher("Saldina", "Cool school", 25, "Programing");

    Employee *e1 = &d;
    Employee *e2 = &t1;
    e1->Work();
    e2->Work();
}
