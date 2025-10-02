#include<iostream>
#include<vector>
using namespace std ;
template <class T>
class vector1 {
    public:
    T *arr;
    int size;
    vector1(int m){
        size  = m;
        arr = new T [size];
    }
    T sum (vector1  &v2){
       T d=0;
        for (int i = 0;i<size;i++){
            d += arr[i]  * v2.arr[i];
        }
        return d;
    }
};
int main ()
{
    vector1<float> v1(3);
    v1.arr[0] = 2.10;
    v1.arr[1] = 1.23;
    v1.arr[2] = 3;
    vector1<float> v2(3);
    v2.arr[0] = 5.99;
    v2.arr[1] = 2.25;
    v2.arr[2] = 6.67;
    float print = v1.sum(v2);
    cout<<print<<endl;


    return 0;

}