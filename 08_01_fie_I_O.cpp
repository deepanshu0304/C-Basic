#include <iostream>
#include <fstream>
/*
The useful classes for working with file in c++ are:
1.   fstreambase
2.   ifstream --> derived from fstreambase
3.   ofstream --> derived from fstreambase
*/

/*
In order to work with files in c++  you will have  to open it . Primarily there are two ways to open a file
1.   using the constructor
2.   using the member function open() of the class
*/
using namespace std;

int main()
{
    string st = "Deepu Bhai ";
    string st2;
    // opening file using constructor and writing it
    ofstream out("sample.txt");   // write operation
    // out << st;
    out <<"My name is "+ st;

     // opening file using constructor and reading it 
    ifstream in("sample2.txt");   // read operation
    // in>>st2;  --> this will print only one starting spelling when first space come or line change come it will stop.
    getline(in , st2); // --> it also print space and all but it will stop whenever line change if u want to print  only  next line use it twice 
    // dont know how to print both line  
    // getline(in , st2);
    cout<<st2;
    return 0;
}