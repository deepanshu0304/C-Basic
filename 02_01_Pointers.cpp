#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    int **c; // --> pointer to pointer....
    c = &b;
    cout << b << endl;
    cout << &a << endl;
    cout << *b << endl; // --> derefrence operator
    cout << *&a << endl;
    cout << *&(a) << endl;
    cout << *(&a) << endl;
    cout << (*&a) << endl;
    cout << c << endl;
    cout << *c << endl; // --> will give adrress of a....
    cout << &b << endl;

    return 0;
}