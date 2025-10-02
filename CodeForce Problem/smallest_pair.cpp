#include<bits/stdc++.h>
using namespace std;
int print(vector<int> &v,int n){
    int min_i = INT_MAX;
    int sum = 0;
    for (int i=0;i<n-1;i++){
        for (int j = i+1;j<n;j++){
            sum = v[i] + v[j] + (j-i);
            min_i = min(min_i,sum);
        }
    }
    return min_i;
}
int main(){
    int n1;
    vector<int>v;
    cin>>n1;
    int n;
    while(n1--){
        cin>>n;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
    }
    cout<<print(v,n)<<endl;
    return 0;
}
/*
OUtput :
1
4
20 1 9 4
OutputCopy
7
*/