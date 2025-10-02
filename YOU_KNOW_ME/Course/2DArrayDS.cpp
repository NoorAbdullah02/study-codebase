#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int Hsum(vector<vector<int>>&v){
    int Max = -63;
    for (int i=1;i<5;i++){
        for (int j=1;j<5;j++){
            int top = v[i-1][j-1] + v[i-1][j] + v[i-1][j+1];
            int mid = v[i][j];
            int bottom = v[i+1][j-1] + v[i+1][j] + v[i+1][j+1];
            int sum = top+mid+bottom;
            Max = max(Max,sum);
        }
    }return Max;
}
int main(){
    int n =6,m=6;
   
    vector<vector<int>>v(n,vector<int>(m));

   for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        cin>>v[i][j];
    }
   }
   cout<<Hsum(v)<<endl;

    return 0;
}