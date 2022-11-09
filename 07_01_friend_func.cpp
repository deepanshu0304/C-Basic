#include <iostream>
using namespace std;

class my
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend void fun();
};
// void my ::fun() --> this is called nesting
void fun()
{
    my m;
    m.a = 4;
    m.b = 42;
    m.c = 24;
}
int main()
{
    return 0;
}
/* either u can use nesting like line no 16 and remove friend from line no 14 
or u can use friend func which is simply writen this way*/