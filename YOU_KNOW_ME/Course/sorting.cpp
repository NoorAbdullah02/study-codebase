#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for (auto item:v){
        cout<<item<<" ";
    }
    return 0;
}