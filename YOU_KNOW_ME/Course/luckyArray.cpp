#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int minimum = *min_element(v.begin(),v.end());
    int cnt = count(v.begin(),v.end(),minimum);
    //cout<<cnt<<endl;
    if (cnt & 1)cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
    
    return 0;
}