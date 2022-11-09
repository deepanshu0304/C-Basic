#include<iostream>
using namespace std;
  /* template< class Xvbn > 
    Xvbn func_name(Xvbn Arg type 1,,,,,)   */




    // int big(int a, int b){
    //     if (a>b)
    //     return a;
    //     else 
    //     return b;}



        template < class X > 
    X big(X a, X b){
        if (a>b)
        return a;
        else 
        return b;
    }
int main(){
    cout << big(4,5)<<endl;
    cout << big(4.5,5.2); // this will not work correct if we use commentd part.....

    
    return 0;
}





/*

        template < class X , class y>  // for usinf diff type of datatype....
    X big(X a, X b){
        if (a>b)
        return a;
        else 
        return b;
    }
int main(){
    cout << big(4,5.2)<<endl;
   
    
    return 0;
} 


*/