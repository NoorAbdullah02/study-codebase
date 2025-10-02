#include<iostream>
using namespace std;
int main ()
{
 int arr[5] = {10,5,4,8,6};
 int (*ptr) [5] = &arr;
 *ptr++;
for(int i=0;i<5;i++) cout<<*(arr+i)<< " ";
return 0;
} 