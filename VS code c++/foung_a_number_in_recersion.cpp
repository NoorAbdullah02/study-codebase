#include<iostream>
using namespace std;
int found(int *arr,int n,int idx,int x){
if (idx==n){
    return 0;
}
 if  (arr[idx]==x)return arr[idx];
else{ found(arr,n,idx+1,x);
}
}

int main ()
{
   int arr[6]={10,20,60,80,40,90};
   int x,n;
   x=100;
   n=6;
   int *ptr=&arr[0];
   int result=found(ptr,n,0,x);
   if(result==0){
    cout<<"Not Present";
   }
   else{
    cout<<" Present";
   }

    return 0;

}
