#include<iostream>
#include<vector>
using namespace std;
int find_min_in_rot_a(vector<int>&input){
if (input.size()==1) return input[0];
int lo=0,hi=input.size()-1;
if (input[lo]<input[hi]){
    return lo;
}
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if (input[mid]>input[mid+1])return mid+1;
    if (input[mid]<input[mid-1])return mid;
    if(input[mid]>input[lo]){
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
}
return -1;
}
int main (){
      int n;
    cin>>n;
    vector <int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   // int target=3;
    cout<<find_min_in_rot_a(v);
    return 0;
}