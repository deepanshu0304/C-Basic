#include<iostream>
using namespace std;
int main(){
   
    float x = 455;
    float & y = x;    // --> this is reference variable
    cout<<x<<endl;
    cout<<y<<endl;
    x = 456;
    cout<<y<<endl;
    return 0;
}