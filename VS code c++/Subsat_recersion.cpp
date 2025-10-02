#include<iostream>
#include<vector>
using namespace std;  
void subset(int *arr,int n,int idx,int sum, vector<int> &result){
    if (idx==n){
        result.push_back(sum);
        return;
    }
    subset(arr,n,idx+1,sum+arr[idx],result);//PIck the ith Element
    subset(arr,n,idx+1,sum,result);//Do not pick the ith element
    // cout<<arr[idx];
    // subset(arr,n,i)
}
int main ()
{
    int arr[]={3,5,6};
    int n=3,sum=0;
    vector<int>result;
     subset(arr,n,0,sum,result);
     for (int i=0;i<result.size();i++){
        cout<<result[i]<< " ";
     }
return 0;
}