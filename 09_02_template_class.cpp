#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    int size;
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }

        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<float> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    cout << v1.dotproduct(v2) << endl;

    return 0;
}