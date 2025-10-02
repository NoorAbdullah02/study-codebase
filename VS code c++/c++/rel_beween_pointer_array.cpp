#include<iostream>
using namespace std;
void process(int *arr,int n){
    for (int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    *(arr+2) = 37;
}
int main ()
{
 int arr[5] = {10,15,3,6,7};
 int *ptr = &arr[0];
 process(ptr,5);
 cout<<endl;
 for (int i=0;i<5;i++)
 {
  cout<<*(arr+i)<< " ";
 }
return 0;
}