#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    //   --> endl is manipulator
    //    there is one more kind of mnipulator  setw which come with headerfile iomanip
    int a = 23, b = 56, c = 1233;
    cout << "the value of a is: " << a << endl;
    cout << "the value of b is: " << b << endl;
    cout << "the value of c is: " << c << endl;

    cout << endl;

    cout << "the value of a is: " << setw(4) << a << endl;

    cout << "the value of b is: " << setw(4) << b << endl;
    cout << "the value of c is: " << setw(4) << c << endl;
    return 0;
}