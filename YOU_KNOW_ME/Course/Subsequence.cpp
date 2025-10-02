#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    int j=0;
    for (int i=0;i<n;i++){
        if (v1[i]!=v2[j])continue;
        else j++;
    }
    if(j==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}