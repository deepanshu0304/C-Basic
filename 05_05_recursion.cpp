#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;
    
    return 0;
}