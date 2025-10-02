#include<iostream>
using namespace std;
template<class T>
class dot{
    public:
    T *arr;
    int size;
    dot(int s){
        size  = s;
        arr = new T [size]; 
    }
    T sum(dot v){
        T s = 0;
        for (int i=0;i<size;i++){
            s += this-> arr[i] * v.arr[i];
        }
        return s;
        
    }
};
int main ()
{
    dot <float> d(3);
    d.arr[0] = 1;
    d.arr[1] = 4;
    d.arr[2] = 5;
    dot <float> d1(3);
    d1.arr[0] = 6.25;
    d1.arr[1] = 2;
    d1.arr[2] = 5;
    float sum = d.sum(d1);
    cout<<sum<<endl;
 
return 0;
}