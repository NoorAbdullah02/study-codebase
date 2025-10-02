#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int binary_search(vector<int>&input,int target,int low,int hi){
    if (low==hi){
        return -1;
    }
    int mid=low+(hi-low)/2;
    if (input[mid]==target){
        return mid;
    }
     else if (input[mid]<target){
        return binary_search(input,target,mid+1,hi);
    }
    else{
          return binary_search(input,target,low,mid-1);

    }

}
int main ()
{
     int n;
    cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
 }
 int target=5;
 int low=0,hi=n-1;
 
 cout<<binary_search(v,target,low,hi);
getch ();
}