#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int k,s;
    cin>>k>>s;
    int ans = 0;
    for (int a=0;a<=k;a++){
        for(int b=0;b<=k;b++){
            int z = s-a-b;
            if (0<= z && k>=z )ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}