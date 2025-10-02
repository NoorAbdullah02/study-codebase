#include<iostream>
#include<vector>
using namespace std;

int occurance(vector<int>&v,int target){
int lo=0;
int hi=v.size()-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(v[mid]==target){
        return mid;
    }
    else if(v[mid]>target){
        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
}
return -1;
}
int main (){
    int n;
    cin>>n;
    vector<int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int target = 9;
    cout<<occurance(v,target);

    return 0;

}