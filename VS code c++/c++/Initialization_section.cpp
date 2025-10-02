#include<iostream>
using namespace std;
class A{
    int id;
    public:
     void set(int x){
        id = x;
        cout<<"ID is "<<" "<<id<<endl;
    }
}; 
int main ()
{
// A a(10);
// int *a = 10;
// int *ptr = &a;
// int *a = new int (10);
// cout<<" "<<" "<<*a<<endl;;
// int *arr = new int [4];
// arr[0]=20;
// arr[1]=20;
// arr[2]=20;
// arr[3]=20;
// delete[] arr; 
// cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
A *ptr = new A;
(*ptr).set(5);
ptr->set(5);
    return 0;

}  