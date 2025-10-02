#include<iostream>
#include<vector>
using namespace std;
int first_last_idx(vector<int>&v,int target){
    int lo=0;
    int hi=v.size()-1;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>=target){
             ans= mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
}
int lower_bound(vector<int>&v,int target){
    int lo=0;
    int hi=v.size()-1;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>target){
             ans = mid;
            lo=mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return ans;
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
    int target=3;
    cout<<first_last_idx(v,target);
    int x=lower_bound(v,target);
    cout<<" "<<x-1;
    return 0;
    
}
