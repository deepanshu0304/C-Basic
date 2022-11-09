#include <iostream>
using namespace std;
class your; // declared the class which is going to be friend
class my
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend your;  // we have declared that the second class is friend so it can acess private mmbr also 
};

class your
{

    my m;
    void 
    fun()
    {    
        m.a = 4;
        m.b = 42;
        m.c = 24;
    }
};
int main()
{
    return 0;
}
         