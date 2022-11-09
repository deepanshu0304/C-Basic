// nth element of fib series
#include <iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    else{
        return fib(n-2) + fib(n-1);
    }
}

int main()
{ 
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}