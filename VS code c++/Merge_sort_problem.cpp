#include<iostream>
using namespace std;
void Merge(int *arr,int m,int r,int mid){
    int an= mid-m+1;
    int bn= r - mid;
    //Creat two Sub arrays;
    int a[an];
    int b[bn];
    for (int i=0;i<an;i++){
        a[i]=arr[m+i];
    }
    for (int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=m;
    while(i<an&&j<bn){
        if (a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
  while(i<an){
    arr[k++]=a[i++];
  }
  while(j<bn){
    arr[k++]=b[j++];
  }
}
void Merge_sort(int *arr,int m,int r){
    if (m==r){
        return;
    }
    int mid =(m+r)/2;
    Merge_sort(arr,m,mid);
    Merge_sort(arr,mid+1,r);
    Merge(arr,m,r,mid);
}
int main (){
    int arr[]={2,3,54,59,4,4,8,8,22,10,5,5,211,5,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=0;
    int r=n-1;
    Merge_sort(arr,m,r);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
        return 0;
}