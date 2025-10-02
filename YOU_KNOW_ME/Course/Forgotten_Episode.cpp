#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
       cin>>arr[i];
    }
    vector<bool>check(n+1,false);
    for (int i=0;i<n;i++){
      if (arr[i]>0 && arr[i] <= n)check[arr[i]] = true;
    }
    for (int i=1;i<=n;i++){
        if (!check[i]){
            cout<<i<<endl;
            return 0;
        }
    }    
   // cout<<n+1<<endl;
    return 0;
}