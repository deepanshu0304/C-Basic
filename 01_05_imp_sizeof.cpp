#include <iostream>
using namespace std;
int main()
{
    float a = 34.4;
    long double b = 34.4;
    cout << "The Size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The Size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The Size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The Size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The Size of 34.4L is " << sizeof(34.4L);
}