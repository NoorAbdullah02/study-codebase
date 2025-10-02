#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
}
//int minimum = INT_MIN;
for(int l=0;l<n;l++){
    for (int r=l;r<n;r++){
        int max_ele = INT_MIN;
        for(int i=l;i<=r;i++){
           max_ele = max(max_ele,v[i]);
           //cout<<v[i]<<" "; 
        }
       // cout<<endl;
       cout<<max_ele<<" ";
    }
}
cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        check();    }
    return 0;
}