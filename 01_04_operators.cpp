#include <iostream>
using namespace std;
int c = 45;
int main()
{
    //   --> 4 types of operator.......
    // 1) arithmetic   -->   eg a+b,a-b....no need of bracket
    // 2) comparison   -->  (a<b), (a==b),.....need of bracket while writing directly in print statement 
    // 3) assignment -->  a=3 ,b=a,
    // 4) logical  -->  &&, ||...
    int a = 4;
    int b = 5;
    int c = a + b;

    cout << "the local c is " << c << endl;

    cout << "the global c is " << ::c; // --> scope of resolution operator..
    return 0;
}
/*u can use <<endl to enter next line instead of
using  \n.....*/     
                       