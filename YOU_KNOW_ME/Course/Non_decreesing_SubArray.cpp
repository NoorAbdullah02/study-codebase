#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void check(){
    int n;cin>>n;
    int cnt =0;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for (int l=0;l<n;l++){
        for (int r = l;r<n;r++){
            bool ans = true;
            for (int i=l;i<r;i++){
                if (v[i]>v[i+1]){
                    ans = false;
                    break;
                }
            }if (ans)cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int n;cin>>n;
    while(n--){
        check();
    }
    return 0;
}