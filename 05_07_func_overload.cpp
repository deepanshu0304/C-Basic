#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a = 4, b = 5, c = 6;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    return 0;
}
// it will automatic detect which functio is being called with help of argument 
// sometime datatype of argument not match but it will set automatically and will run the function
//  if nothing work then it will return error