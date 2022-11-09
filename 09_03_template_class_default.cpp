#include <iostream>
using namespace std;
template <class T1 = float, class t2 = int>
class vector
{
public:
   t2 size;
    T1 *arr;
    vector(t2 m)
    {
        size = m;
        arr = new T1[size];
    }
    T1 dotproduct(vector &v)
    {
        T1 d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }

        return d;
    }
};
int main()
{
    vector<> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    cout << v1.dotproduct(v2) << endl;

    return 0;
}