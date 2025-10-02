#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    for (int i=0;i<n;i++){
          for (int j=0;j<n;j++){
            cin>>v[i][j];
          }
    }
    int sum = 0,sum1 = 0;
    for (int i=0;i<n;i++){
        sum += v[i][i];
        sum1 += v[i][n-i-1];
    }
    //cout<<sum<<" "<<sum1<<endl;
    cout<<abs(sum-sum1)<<endl;
    
    return 0;
}