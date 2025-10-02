#include<iostream>
using namespace std;
void parray(int *arr,int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
}
int main ()
{
 int *ptr1=NULL;
//  int arr[]={20,23,25,1,6};
//  int *ptr=&arr[0];
// *(ptr+2)=37;
// parray(ptr,5);
cout<<ptr1<<" ";
return 0;
}