#include <iostream>
using namespace std;
template <class T>
// float avg( T x , T y ){
//   float result = (x+y)/2.0;
//   return result;
//}
void swap1(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    // float r = avg(2.0,4.25);
    //  cout<<r<<endl;
    int a = 2.0;
    int b = 65.26;
    swap1(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}