#include<iostream>
using namespace std;
int main ()
{
 float *arr = new float [3];
 for (int i=0;i<2;i++){
   cin>> *(arr+i);
   
 }
 //delete[] arr;
 for (int i=0;i<2;i++){
    cout<<*(arr+i)<<" ";

 }
return 0;
}