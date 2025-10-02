#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int n;cin>>n;
        int sum = 0;
        for(int i=0;i<n;i++){
           int x;cin>>x;
        sum = max(sum,x-i);
       }
         cout<<sum-1<<endl;
    
    
    }
    
    return 0;
}