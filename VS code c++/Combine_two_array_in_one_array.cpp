#include<iostream>
#include<conio.h>
using namespace std;
void add(int *arr,int *arr1,int *arr3,int n,int n1){
    int i=0,j=0,k=0;
    while(i<n&&j<n1){
        if (arr[i]<arr1[j]){
            arr3[k++]=arr[i++];
        }
        else{
            arr3[k++]=arr1[j++];
        }
    }
   
    while(i<n){
        arr3[k++]=arr[i++];
    }
    while(j<n1){
        arr3[k++]=arr1[j++];
    }
}
int main ()
{
    int n=5,n1=6;
    int n3=n+n1;
 int arr[n]={1,2,3,4,7};
 int arr1[n1]={8,9,10,11,12,13};
 int arr3[n3];
 add(arr,arr1,arr3,n,n1);
 for (int i=0;i<n3;i++){
    cout<<arr3[i]<<" ";
 }
getch ();
}