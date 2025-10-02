#include<iostream>
using namespace std;
int main ()
{
 void *ptr;
 int age=10;
 ptr=&age;
 int *ptr1=(int*)&age;
 cout<<*ptr1;
return 0;
}