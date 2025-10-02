#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int mask = 0;mask<(1<<n);mask++){  //(1<<n) that's means 2^n
        for (int i=0;i<n;i++){
            if((mask>>i)&1){   // if the bit is on or off
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}