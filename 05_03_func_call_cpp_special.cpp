#include <iostream>
using namespace std;
//    int & swap(int &a, int &b); 
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
//                 }
void swap(int &a, int &b) //--> call by refrence variable
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4;
    int y = 5;
    cout << "The value of x is: " << x << " and value of y is: " << y << endl;
 swap(x, y); //--> call by refrence variable
//     swap(x, y) = 63;
    cout << "The value of x is: " << x << " and value of y is: " << y;

    return 0;
}

/* 
if u  r goin to execute commented part  then it will change a=63 and b=4 or we can say that
it will change x=63 and y=4
*/