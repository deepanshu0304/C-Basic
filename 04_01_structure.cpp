
#include<iostream>
struct employee
{
    int eid;
    float salary;
    char favchar;
};

using namespace std;

int main(){
    struct employee e1;
    cin>>e1.eid;
    e1.salary = 120000;
    e1.favchar = 'D';
    cout<<e1.eid<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.favchar<<endl;
    
    return 0;
}   