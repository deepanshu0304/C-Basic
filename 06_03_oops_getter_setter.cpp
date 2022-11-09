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
    void Setname(string name) // for setter we can do onething more that we declare it in clss but
    // define it outside .....for example see company setter
    {
        Name = name;
    }
    string Getname()
    {
        return Name;
    }

    void Setcompany(string company);

    string Getcompany()
    {
        return Company;
    }

    void Setage(int age)
    {
        Age = age;
    }
    void Getage()
    {
        cout << Age;
    }
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};
void Employee ::Setcompany(string company)
{
    Company = company;
}

int main()
{
    Employee employee1;
    employee1.Setname("Deepu");
    employee1.Setcompany("NIT");
    employee1.Setage(18);
    cout << "Name- " << employee1.Getname() << endl;
    cout << "Company- " << employee1.Getcompany() << endl;
    cout << "Age- ";
    employee1.Getage();
}
/* suppose u intialized using  constructor
after that u can use getter and setter to update or rewrite them later,.. */




/*
 in uppern code i explained many things 
 like 
 -->  getter and setter 
 --> setter outside class
 -->  void type getter 
 --> some return type getter .....*/
