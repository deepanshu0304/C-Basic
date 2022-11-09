#include<iostream>
using namespace std;

int main(){
     int marks[] = {22, 233, 24, 255};
    int *p = marks;
      cout << p << endl; // adress of marks[0]

    cout << p + 1 << endl; // adress of marks[1]
    cout<<(*p)++<<endl;   /* here p is not incrementing ....here value stored at *p is incrementng means marks[0]
    when again u will print *p or marks[0] it will give 23 instead of 22..*/


    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<marks[0]<<endl;
    return 0;
}