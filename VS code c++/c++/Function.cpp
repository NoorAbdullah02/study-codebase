#include<iostream>
using namespace std;
template<class T1=float,class T2=float>
float display(T1 x,T2 y){
  return x+y;
}
template<class T1 = int ,class T2 = int >
void swap(T1 *x,T2 *y){
int temp = *x;
*x=*y;
*y=temp;
cout<<*x<<" "<<*y<<endl;
}
int main ()
{
   
 float sum = display(5.2,1);
 cout<<sum<<endl;
int a=5,b=6;
 swap(&a,&b);

return 0;
}