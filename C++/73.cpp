#include<iostream>
using namespace std;
int main ()
 {
    int arr[]={6,9,8,7,4,2,3};
    int arr1[]={2,6,8,4,14,36,11,2};
    int m=7;
    int n=8;
    int result[m+n];
    int i=0,j=0,k=0;
    while(i<m&&j<n)
    {
     if (arr[i]<arr[j])
     {
         result[k]=arr[i];
         i++;
         k++;
     }
     else{
            result[k]=arr[j];
            k++;
            j++;

     }
    }
    while(i<m){
        result[k]=arr[i];
i++;
k++;
    }
    while(j<n)
    {
        result[k]=arr[j];
        j++;
        k++;
    }
    for (int i=0;i<m+n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;

}
