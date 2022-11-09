#include <iostream>
using namespace std;

int main()
{
    int marks[] = {22, 233, 24, 255};
    int *p = marks;
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    //   --> (*p+1) , (*p)+1  these are wrong...this will give value of *p suppose n and then will add 1 in it thus final ans n+1
    cout << p << endl; // adress of marks[0]

    cout << p + 1 << endl; // adress of marks[1]
    cout<<*p++<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}