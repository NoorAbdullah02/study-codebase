#include<iostream>
using namespace std;
int main ()
{
 int a[] = {10,20,30};
 int *ptr = &a[0];
 *ptr = 20;
 cout<<a[0]<<endl<<ptr<<endl;
 cout<<*++ptr<<" "<<*ptr++<<" "<<++*ptr<<" "<<(*ptr)++<<" "<<*(ptr+1);
return 0;
} 