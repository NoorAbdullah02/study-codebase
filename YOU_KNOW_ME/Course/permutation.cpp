#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n),a(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());

    if (v==a)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}