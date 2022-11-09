#include<iostream>
// --> typedef used for shortning the datatype like struct employe to any shorter name 
 typedef struct employee
{
    int eid;
    float salary;
    char favchar;
} ep;

using namespace std;

int main(){
    ep e1; // --> ep(initial it was struct employee but we used typedef) is datatype e1 is variable name
    e1.eid = 1;
    e1.salary = 120000;
    e1.favchar = 'v';
    cout<<e1.eid<<endl;
    cout<<e1.salary<<endl;
    cout<<e1.favchar<<endl;
    
    return 0;
}