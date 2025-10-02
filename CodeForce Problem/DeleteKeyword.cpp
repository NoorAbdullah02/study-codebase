#include<iostream>
using namespace std;
int main ()
{
 int *arr = new int(10);
 int *ptr = new int(20);
 cout<<"Value of Arr is : "<<*arr<<endl;
 cout<<"Value of Ptr is : "<<*ptr<<endl;
 delete arr;
 delete ptr;

return 0;
}