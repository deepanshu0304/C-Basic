#include <iostream>
using namespace std;
using std::string;
class Employee
{
public: /* there are three type of access modifier
 public , private , protected
 public --> u can access element out of class
 private --> u can  not access element out of class
 protected--> somewhere between public and private...means u can access them in derived classes
 by default in c++ class is private.... */
    string Name;
    string Company;
    int Age;
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<endl; 
        cout<<"Company - "<<Company<<endl; 
        cout<<"Age - "<<Age<<endl; 
    }
};

int main()
{
    Employee employee1;
    employee1.Name = "Deepanshu";
    employee1.Company = "NIT-Calicut";
    employee1.Age = 18;
    employee1.IntroduceYourself();

cout<<endl;

    Employee employee2;
    employee2.Name = "Saldina";
    employee2.Company = "You-Tube";
    employee2.Age = 25;
    employee2.IntroduceYourself();
    /*
    suppose u have to create 100 employees then how will u create ???
    by help of constructor*/

        return 0;
}