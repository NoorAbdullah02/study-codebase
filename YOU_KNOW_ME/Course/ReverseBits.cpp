#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int bit[32];
        int a;cin>>a;
        for (int i=0;i<32;i++){
            bit[i] =  ((a >> i) & 1);
        }
        reverse(bit,bit+32);
        unsigned int ans = 0;
        for(int i=0;i<32;i++){
            if (bit[i]){
                ans += (1 << i);
            }
        }cout<<ans<<endl;

    }
    return 0;
}