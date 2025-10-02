#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int x = __builtin_popcount(n);
    // for (int i=0;i<n;i++){
    //     if (__builtin_popcount(i) == x){
    //         cout<<i<<endl;
    //         return 0;
    //     }
    //}
    cout<< ((1 << x) - 1)<<endl;
    return 0;
}