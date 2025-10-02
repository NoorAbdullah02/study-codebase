// You are given n <= 20 numbers, each up to 10^9. Is there a subset with a sum equal to a given goal s?

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;cin>>n>>s;
    vector<int>a(n);
    for (int mask = 0;mask<(1<<n);mask++){
        int sum = 0;
        for (int i=0;i<n;i++){
            if ((mask>>i)&1)sum+= a[i];
        }
        if (sum == s){
            cout<<"Found"<<endl;return 0;
        }
    }
    cout<<"Not Found"<<endl;
    return 0;
}