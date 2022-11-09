#include <iostream>
using namespace std;
void swap(int *a, int *b)//--> call by refrence
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4;
    int y = 5;
    cout << "The value of x is: " << x << " and value of y is: " << y << endl;
    swap(&x, &y); //--> call by refrence
    
    cout << "The value of x is: " << x << " and value of y is: " << y;

    return 0;
}