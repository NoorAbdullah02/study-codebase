#include<iostream>
using namespace std;
int  found(int *arr,int n,int idx,int x){
if (idx==n){
    return -1;
}
if (arr[idx]==x)return idx;
else{
    return found(arr,n,idx+1,x);
}
}
int mian ()
{
    int arr[6]={10,20,60,80,40,90};
   int x,n;
   x=40;
   n=6;
   int *ptr=&arr[0];
   int result=found(arr,n,0,x);
   if(result==-1)cout<<"Not Present";
   else{
    cout<<"Present";
   }

    return 0;

}

