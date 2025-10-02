#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res = v;
    reverse(v.begin(),v.end());
    for (int i=0;i<n;i++){
        if (v[i] != res[i]){
              cout<<"NO"<<endl;
              return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}