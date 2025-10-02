#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int t;cin>>t;
        unsigned int  ans = 0;
        for (int k=0;k<32;k +=2){
             int a = (t >> k) &1;
             int b = (t >> (k+1)) & 1;
             swap(a,b);
             if (a){
                ans += 1<<k;
             }
             if(b){
                ans += 1<<(k+1);
             }
        }
        cout<<ans<<" ";
    }cout<<endl;
    return 0;
}