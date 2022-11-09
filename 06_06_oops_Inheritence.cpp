#include <iostream>
using namespace std;
using std::string;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
    /*  if u have completely erased 4th 5th 6th and 10th line
     and  erased after semicolon in 11th line it doesnt have any diffrnece on this program
     ....whats its true effect we will study later */
};
class Employee : AbstractEmployee
{

public: /*  -->if u used private here then u have to define getter and setter
 for taking inputs and outputs..
   --> u can have used protected here to avoid public ..becoz u r accessing it in derived classes
    and thats what protected are made for.....
  -->  public is also fine but suppose u have restriction not to allow it anywhere outside then
     protected will be helpful*/
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
};
class Developer : Employee
{
public: /* as we know there is default constructor which get destroyed whenever we create
our own new constructor ....now as we have inherited thing from our base class employee  our default
constructor destroyed ....so now we have to create one ...*/
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
};

int main()
{
    Developer d = Developer("Deepanshu", "NIT-Calicut", 18, "c++");
    d.fixbug();
    /* now suppose the user u created in developer (derived class)
    he/she wants to ask for promotion .....now this cant be done outside the  base class
    or derived class....because inheritence is private by default
    u have to write like this
     --->   class Developer : public Employee......
     */
    Teacher t1 = Teacher("Saldina", "Cool school", 25, "Programing");
    t1.PrepareLesson();
    t1.AskForPromotion();
}
