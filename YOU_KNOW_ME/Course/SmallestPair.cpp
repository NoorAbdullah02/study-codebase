#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void slove(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = INT_MAX;
    for (int i=0;i<n-1;i++){
        int sum = 0;
        for (int j=i+1;j<n;j++){
             sum += v[i]+v[j]+(j-i);
             ans = min(ans,sum);
             sum = 0;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int n;cin>>n;
    while(n--){
       slove();

    }
    return 0;
}