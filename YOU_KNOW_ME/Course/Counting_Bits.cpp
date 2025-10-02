#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum = 0;
        for (int i=1;i<=n;i++){
            vector<int>res;
            int temp = i;
        while(temp!=0){
            int rem = temp%2;
            res.push_back(rem);
            temp /= 2;
        }
       sum += std::count(res.begin(),res.end(),1);
    }
      cout<<sum<<endl;  

    }
    return 0;
}