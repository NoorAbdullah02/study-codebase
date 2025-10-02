#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    int min_ele = INT_MAX;
    int max_ele = INT_MIN;
    int min_idx = -1, max_idx = -1;
    for (int i=0;i<n;i++){
        if (min_ele>v[i]){
            min_ele = v[i];
            min_idx = i;
        }
        if (max_ele<v[i]){
            max_ele = v[i];
            max_idx = i;
            }
    }//cout<<min_ele<<" "<<max_ele<<endl;
    swap(v[min_idx],v[max_idx]);
    for (auto it:v){
        cout<<it<<" ";
    }cout<<endl;
    
    return 0;
}